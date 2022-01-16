class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        
        vector<vector<pair<int, int>>>vec(n);
        vector<int>dist(n);
        
        for(int i=0; i<roads.size(); i++){
            vec[roads[i][0]].push_back({roads[i][1], roads[i][2]});
            vec[roads[i][1]].push_back({roads[i][0], roads[i][2]});
        }
        
        for(int i=0; i<n; i++){
            dist[i] = INT_MAX;
        }
        queue<int>q;
        dist[0] = 0;
        q.push(0);
        int cnt = 0;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto it: vec[node]){
                int v = it.first;
                int w = it.second;
                if(dist[node] + w < dist[v]){
                    dist[v] = dist[node] + w;
                    q.push(v);
                }
            }
        }
        
        return dist[n-1];
    }
};
