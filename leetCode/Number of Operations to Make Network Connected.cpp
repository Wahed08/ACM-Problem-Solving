class Solution {
public:
    void dfs(vector<vector<int>>&vec, vector<int>&vis, int src){
        
        vis[src] = 1;
        for(auto it : vec[src]){
            if(!vis[it]){
                dfs(vec,vis,it);
            }
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& conn) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int ln = conn.size(), cnt=0;
        vector<int>vis(n, 0);
        vector<vector<int>>vec(n);
        
        if(n-1 > ln) return -1;
        for(auto it : conn){
            vec[it[0]].push_back(it[1]);
            vec[it[1]].push_back(it[0]);
        }
        
        for(int i=0; i<vis.size(); i++){
            if(!vis[i]){
                dfs(vec, vis, i);
                cnt++;
            }
        }
        return cnt-1;
    }
};
