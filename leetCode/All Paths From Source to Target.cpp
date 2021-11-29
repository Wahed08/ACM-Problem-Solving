class Solution {
public:
    
    void pathfinding(vector<vector<int>>& graph, int src, int dst, vector<int>& path, vector<vector<int>>& vec){
        path.push_back(src);
        
        DFS(graph, src, dst, path, vec);
    }
    
    void DFS(vector<vector<int>>& graph, int src, int dst, vector<int>& path, vector<vector<int>>& vec){
            if(src == dst){
                vec.push_back(path);
            }else{
                for(auto &node: graph[src]){
                    // cout<<node<<" ";
                    path.push_back(node);
                    DFS(graph, node, dst, path, vec);
                    path.pop_back();
                }
            }    
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>path;
        vector<vector<int>>vec;
        int src = 0;
        int dst = graph.size()-1;
    
        pathfinding(graph, src, dst, path, vec);
        
        return vec;
    }
};
