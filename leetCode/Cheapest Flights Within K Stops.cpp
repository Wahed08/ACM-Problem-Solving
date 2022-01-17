class Solution {
public:
     void pathfinding(vector<vector<pair<int, int>>>&graph, int src, int dst, vector<int>& path, vector<vector<int>>& allPaths, vector<pair<int, int>>&dist,vector<int>&sum, int x){
          
        path.push_back(src);
        DFS(graph, src, dst, path, allPaths, dist, sum,x);
    }
    
    void DFS(vector<vector<pair<int, int>>>&graph, int src, int dst, vector<int>& path, vector<vector<int>>& allPaths,vector<pair<int, int>>&dist,vector<int>&sum, int x){
            if(src == dst){
                allPaths.push_back(path);
                int y = 0;
                for(int i=0; i<sum.size(); i++)
                    y += sum[i];
                dist.push_back({y, x});
            }else{
                for(auto node: graph[src]){
                    path.push_back(node.first);
                    sum.push_back(node.second);
                    x++;
                    DFS(graph, node.first, dst, path, allPaths, dist,sum,x);
                    path.pop_back();
                    sum.pop_back();
                    x--;
            }
        }    
}
    
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<vector<pair<int, int>>>vec(n);     //it works for DAG
        vector<pair<int, int>>dist;
        
        vector<vector<int>>allPaths;
        vector<int>path;
        vector<int>sum;
        int x=-1;
        for(int i=0; i<flights.size(); i++){
            vec[flights[i][0]].push_back({flights[i][1], flights[i][2]});
        }
        
        pathfinding(vec, src, dst, path, allPaths, dist, sum,x);
        int flag;
          for(int i=0; i<dist.size(); i++){
              if(k == dist[i].second)
              {
                flag = dist[i].first;
                  break;
              }else
                  flag = -1;
        }
        
        return flag;
    }
};
