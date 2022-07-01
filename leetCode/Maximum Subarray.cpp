class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int32_t  maxSum = nums[0], cnt = nums[0];
        
        if(nums.size() == 1)
            return nums[0];
        
        // this is kadane's algorithm
        for(int i=1; i<nums.size(); i++){
            cnt += nums[i];
            cnt = max(cnt, nums[i]);
            maxSum = max(cnt, maxSum);
        }  
         
        return maxSum;
    }
};


// dp memoization solution
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int cnt = INT_MIN;
        vector<int>dp(nums.size(), 0);
        dp[0] = nums[0];
        
        if(nums.size() == 1) return nums[0];
        for(int i=1; i<nums.size(); i++)
            dp[i] = max(nums[i], nums[i]+dp[i-1]);
        
        for(auto it : dp) cnt = max(cnt, it);
        return cnt;
    }
};
