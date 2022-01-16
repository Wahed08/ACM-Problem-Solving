class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<vector<pair<int, int>>>vec(n+1);
        vector<int>dist(n+1, INT_MAX);
        
        for(int i=0; i<times.size(); i++){
            vec[times[i][0]].push_back({times[i][1], times[i][2]});
        }
        
        queue<int>q;
        dist[k] = 0;
        q.push(k);
        
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
       int cnt = 0;
        for(int i=1; i<=n; i++){
            if(dist[i] == INT_MAX)
                return -1;
            cnt = max(cnt,dist[i]);
        }
        return cnt;
    }
};
