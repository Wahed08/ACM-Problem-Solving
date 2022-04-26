class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = points.size();
        priority_queue<pair<int, int>, vector<pair<int,int>>,greater<pair<int, int>>>pq; //min-heap
        
        vector<bool>tree(n, false);
        pq.push({0,0}); //{distance, node}
        int cost = 0, edge = 0;
        
        while(edge < n){
            pair<int, int> x = pq.top();
            pq.pop();
            
            int weight = x.first;
            int node = x.second;
            
            if(tree[node])
                continue;
            
            tree[node] = true;
            cost += weight;
            edge++;
            
            for(int i=0; i<n; i++){
                int nextVal = abs(points[node][0]-points[i][0]) + abs(points[node][1]-points[i][1]);
                pq.push({nextVal, i});
            }
        }
        return cost;
    }
};
