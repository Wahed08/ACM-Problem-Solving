class Solution {
public:
     bool dfsCycle(vector<int>&vis, vector<vector<int>>& graph, int i, vector<int>&dfsVis){
         vis[i] = 1;
         dfsVis[i] = 1;
         
         for(auto x: graph[i]){
             if(!vis[x]){
                 if(dfsCycle(vis, graph, x, dfsVis))
                     return true;
             }
             else if(dfsVis[x])
                 return true;
         }
         dfsVis[i] = 0;
         return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0); // topological sort // cycle detection in                                                                directed graph
        vector<vector<int>>vec(numCourses);
        int ln = prerequisites.size();
        
        for(int i=0; i<ln; i++){
            vector<int>v{prerequisites[i]};
            vec[v[1]].push_back(v[0]);
        }
        vector<int>vis(numCourses, 0);
        vector<int>dfsVis(numCourses, 0);
        
        for(int i=0; i<numCourses; i++){
            if(!vis[i]){
                if(dfsCycle(vis, vec, i, dfsVis))
                    return false;
            }
        }
        return true;
    }
};
