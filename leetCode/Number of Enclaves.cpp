class Solution {
public:
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    int dfs(vector<vector<int>>& grid, int i, int j, int m, int n, vector<vector<int>>&vis){
        int area = 1;
        if(i<0||i>=m||j<0||j>=n||grid[i][j]==0||vis[i][j])return 0;

        vis[i][j] = 1;
        grid[i][j] = 2;
        for(int k=0; k<4; k++){
            int x = dx[k] + i;
            int y = dy[k] + j;
            area += dfs(grid,x,y,m,n,vis);
        }
        return area;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);

        int m = grid.size(),n = grid[0].size();
        vector<vector<int>>vis(m, vector<int>(n, 0));
        int cnt = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if((i==0 || i==m-1 || j==0 || j==n-1) && grid[i][j]==1){
                    dfs(grid,i,j,m,n,vis);
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!vis[i][j] and grid[i][j]==1){
                    cnt += dfs(grid,i,j,m,n,vis);
                }
            }
        }

        return cnt;
    }
};


//
class Solution {
public:
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    void dfs(vector<vector<int>>& grid, int i, int j, int m, int n, vector<vector<int>>& vis){
        if(i<0 || i>=m || j<0 || j>=n || vis[i][j] || grid[i][j] == 0) return;

        vis[i][j] = 1;
        grid[i][j] = 2;
        for(int k=0; k<4; k++){
            int x = dx[k] + i;
            int y = dy[k] + j;
            dfs(grid, x, y, m, n, vis);
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);

        int m = grid.size(), cnt = 0;
        int n = grid[0].size();
        vector<vector<int>>vis(m, vector<int>(n, 0));

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i == 0 || i == m-1 || j == 0 || j == n-1 && !vis[i][j] && grid[i][j] == 1){
                    dfs(grid, i, j, m, n, vis);
                }
            }
        }

        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
