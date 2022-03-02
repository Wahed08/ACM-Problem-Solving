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


// using memoization technique
class Solution {
public:
    int dp[1001][10001];
        
    int Memoization(string text2, string text1, int i, int j){
        if(i == 0 || j == 0)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(text2[i-1] == text1[j-1])
            return dp[i][j] = 1 + Memoization(text2, text1, i-1, j-1);
        else
            return dp[i][j] = max(Memoization(text2, text1, i, j-1),Memoization(text2, text1, i-1, j));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int m = text2.length();
        int n = text1.length();
        
        dp[m][n];
        memset(dp, -1, sizeof(dp));
        
        return Memoization(text2, text1, m, n);
    }
};
