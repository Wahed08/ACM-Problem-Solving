class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int m = t.length();
        int n = s.length();
        int count = 0;
        
        if(m == 0 && n == 0)
            return true;
        if(m == 0)
            return false;
        if(n == 0)
            return true;
        
        int i = n-1;
        int j = m-1;
        
        while(j != -1){
            if(s[i] == t[j]){
                j--;
                i--;
                count++;
                if(i == -1)
                    break;
            }else{
                j--;
            }
        }
        if(count == s.length())
            return true;
        return false;
    }
};

// Solution Using DP

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int m = s.length();
        int n = t.length();
       
        int dp[m+1][n+1];
        memset(dp, 0, sizeof(dp));
        
        for(int i = 1; i<=m; i++){
            for(int j = 1; j<=n; j++){
                
                if(s[i-1] == t[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        
        if(dp[m][n] == m)
            return true;
        else
            return false;
    }
};
