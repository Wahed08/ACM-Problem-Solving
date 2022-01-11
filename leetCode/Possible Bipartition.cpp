class Solution {
public:
   bool bfs(int color[], vector<vector<int>>&vec, int i){
        queue<int>q;
        q.push(i);
        color[i] = 1;
        
        while(!q.empty()){
            int x = q.front();
            q.pop();
            for(auto j : vec[x]){
                if(color[j] == -1){
                    color[j] = 1 - color[x];
                    q.push(j);
                }else if(color[j] == color[x])
                    return false;
            }
        }
        return true;
    }
    
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        // graph coloring problem // detect a cycle in undirected graph // is Graph Bipartite?   
        
        vector<vector<int>>vec(n+1);
          
         for(int i=0; i<dislikes.size(); i++){
            vector<int>v = dislikes[i];
             
            vec[v[0]].push_back(v[1]);
            vec[v[1]].push_back(v[0]);
         }
        
        int color[n+1];
        memset(color, -1, sizeof(color));
        
        for(int i=0; i<n; i++){
            if(color[i] == -1){
                if(!bfs(color, vec, i))
                    return false;
            }
        }
        return true;
    }
};
