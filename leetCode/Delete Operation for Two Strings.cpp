class Solution {
public:
    int minDistance(string word1, string word2) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int m = word1.length(), n = word2.length();
        int dp[m+1][n+1];
        
        memset(dp, 0, sizeof(dp));
        
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                
                if(word1[i-1] == word2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
        return (m + n) - 2 * dp[m][n];
    }
};
