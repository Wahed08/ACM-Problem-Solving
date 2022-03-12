class Solution {
public:
  
    int countPaths(int n, vector<vector<int>>& roads) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<vector<pair<int, int>>>vec(n);
        vector<long long>dist(n, LONG_MAX);
        vector<int>path(n, 0);
        long mod = 1e9+7;
      
        for(int i=0; i<roads.size(); i++){
            vec[roads[i][0]].push_back({roads[i][1], roads[i][2]});
            vec[roads[i][1]].push_back({roads[i][0], roads[i][2]});
        }
        
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
        pq.push({0,0}); // {distance, node} [min-heap]
        dist[0] = 0;
        path[0] = 1;
        
        while(!pq.empty()){
            
            long distance = pq.top().first;
            long node = pq.top().second;
            pq.pop();
            
            for(auto it: vec[node]){
                long v = it.first;
                long w = it.second;
                if(dist[node] + w < dist[v]){
                    dist[v] = dist[node] + w;
                    pq.push({dist[v], v});
                    path[v] = path[node] % mod;
                }
                else if(dist[v] == w + distance){
                    path[v] += path[node];
                    path[v] %= mod;
                }
            }
        }
        return path[n-1];
    }
};
