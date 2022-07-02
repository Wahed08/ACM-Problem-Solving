class Solution {
public:
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    void dfs(vector<vector<char>>& grid, int i, int j, int m, int n, vector<vector<int>>&vis){
        
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]=='0' || vis[i][j]) return;
        
        vis[i][j] = 1;
        for(int k=0; k<4; k++){
            int x = dx[k] + i;
            int y = dy[k] + j;
            dfs(grid,x,y,m,n,vis);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int m = grid.size(), n = grid[0].size(), cnt = 0;
        vector<vector<int>>vis(m, vector<int>(n, 0));

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    dfs(grid,i,j,m,n,vis);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
