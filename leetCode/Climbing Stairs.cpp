class Solution {
public:
    int climbStairs(int n) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int dp[n+1];
        dp[1] = 1;
        if(n > 1)
            dp[2] = 2;
        for(int i=3; i<=n; i++) dp[i] = dp[i-1] + dp[i-2];

        return dp[n];
    }
};
