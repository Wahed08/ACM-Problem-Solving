class Solution {
public:
    int rob(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        vector<int>dp(n+1, 0), another(n+1, 0);
        
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);
        
        dp[0] = nums[0], dp[1] = max(nums[1], nums[0]);
        another[1] = nums[1], another[2] = max(nums[1], nums[2]);
        
        for(int i = 2; i<n-1; i++){
            dp[i] = max((dp[i-2] + nums[i]), dp[i-1]);
            dp[i-1] = max(dp[i-1], dp[i-2]);
        }
        
        for(int i = 3; i<n; i++){
            another[i] = max((another[i-2] + nums[i]), another[i-1]);
            another[i-1] = max(another[i-1], another[i-2]);
        }
        
        return max(dp[n-2], another[n-1]);
    }
};
