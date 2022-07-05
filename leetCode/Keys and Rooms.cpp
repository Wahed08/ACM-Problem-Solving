class Solution {
public:
    void dfs(vector<vector<int>>&rooms, vector<int>&vis,int src){
        
        vis[src] = 1;
        for(auto it : rooms[src]){
            if(!vis[it]){
                dfs(rooms,vis,it);
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        
        int n = rooms.size(), src=0, cnt=0;
        vector<int>vis(n, 0);
        
        dfs(rooms, vis, src);
        for(auto it : vis){
            if(it == 1) cnt++;
        }
        return cnt==n? true : false;
    }
};
