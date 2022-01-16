class Solution {
public:
     void pathfinding(vector<vector<pair<int, int>>>&graph, int src, int dst, vector<int>& path, vector<vector<int>>& allPaths, vector<int>&dist,vector<int>&sum){
          
        path.push_back(src);
        DFS(graph, src, dst, path, allPaths, dist, sum);
    }
    
    void DFS(vector<vector<pair<int, int>>>&graph, int src, int dst, vector<int>& path, vector<vector<int>>& allPaths,vector<int>&dist,vector<int>&sum){
            if(src == dst){
                allPaths.push_back(path);
                int x = 0;
                for(int i=0; i<sum.size(); i++)
                    x += sum[i];
                dist.push_back(x);
            }else{
                for(auto node: graph[src]){
                    path.push_back(node.first);
                    sum.push_back(node.second);
                    DFS(graph, node.first, dst, path, allPaths, dist,sum);
                    path.pop_back();
                    sum.pop_back();
            }
        }    
}
    
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int, int>>>vec(n);
        vector<int>dist;
        
        vector<vector<int>>allPaths;
        vector<int>path;
        vector<int>sum;
        
        for(int i=0; i<flights.size(); i++){
            vec[flights[i][0]].push_back({flights[i][1], flights[i][2]});
        }
        
        pathfinding(vec, src, dst, path, allPaths, dist, sum);
          for(int i=0; i<dist.size(); i++){
           cout<<dist[i]<<" ";
        }
        return 5;
    }
};
