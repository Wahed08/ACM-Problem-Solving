class Solution {
public:
    
    void dfs(vector<vector<int>>&vec, int i, vector<int>&vis){
        vis[i] = 1;
        
        for(auto x: vec[i]){
            if(!vis[x]){
                dfs(vec, x, vis);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = isConnected.size();
        vector<vector<int>>vec(n);
        vector<int>vis(n,0);
        
        for(int i=0; i<n; i++){
            vector<int>v{isConnected[i]};
            for(int j=0; j<v.size(); j++){
                if(v[j] == 1){
                    vec[i].push_back(j);
                }
            }
        }
        
        int count = 0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                count++;
                dfs(vec, i, vis);
            }
        }
        
        return count;
    }
};
