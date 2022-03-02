class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int m = text2.length();
        int n = text1.length();
       
        int dp[m+1][n+1];
        memset(dp, 0, sizeof(dp));
        
        for(int i = 1; i<=m; i++){
            for(int j = 1; j<=n; j++){
                
                if(text2[i-1] == text1[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        
        return dp[m][n];
    }
};
