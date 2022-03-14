class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<vector<pair<int, int>>>vec(n);
        
        for(int i=0; i<flights.size(); i++){
            vec[flights[i][0]].push_back({flights[i][1], flights[i][2]});
        }
        
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>pq;
        pq.push({0, src, k+1});  // {distance, node, stop} min-heap
        
        while(!pq.empty()){
            
            vector<int>v = pq.top();
            pq.pop();
            
            int distance = v[0];
            int node = v[1];
            int station = v[2];
            
            if(dst == node)
                return distance;
            
            if(station > 0){
                
                for(auto it : vec[node]){
                    int vertex = it.first;
                    int weight = it.second;
                    int total = distance + weight;
                    pq.push({total, vertex, station-1});
                }
            }
        }
        
        return -1;
    }
};
