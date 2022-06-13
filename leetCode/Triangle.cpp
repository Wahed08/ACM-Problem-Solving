// GOT TLE 42/44

class Solution {
public:
    int sum = INT_MAX, ans=0;
    void dfs(vector<vector<int>>& triangle, int n, int i, int j){
        if(i == n){
            sum = min(sum, ans);
            return;
        }
        ans += triangle[i][j];
        dfs(triangle, n, i+1, j);
        dfs(triangle, n, i+1, j+1);
        ans -= triangle[i][j];
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = triangle.size();
        dfs(triangle, n, 0, 0);
        
        return sum;
    }
};
