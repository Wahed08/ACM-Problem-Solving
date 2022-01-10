class Solution {
public:
    bool bfs(int color[], vector<vector<int>>& graph, int i){
        queue<int>q;
        q.push(i);
        color[i] = 1;
        
        while(!q.empty()){
            int x = q.front();
            q.pop();
            for(auto j : graph[x]){
                if(color[j] == -1){
                    color[j] = 1 - color[x];
                    q.push(j);
                }else if(color[j] == color[x])
                    return false;
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int ln = graph.size(); // graph coloring problem
        int color[ln+1];
        memset(color, -1, sizeof(color));
        
        for(int i=0; i<ln; i++){
            if(color[i] == -1){
                if(!bfs(color, graph, i))
                    return false;
            }
        }
        return true;
    }
};
