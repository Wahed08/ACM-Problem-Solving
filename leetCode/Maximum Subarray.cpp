class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int32_t  maxSum = nums[0], cnt = nums[0];
        
        if(nums.size() == 1)
            return nums[0];
        
        for(int i=1; i<nums.size(); i++){
            cnt += nums[i];
            cnt = max(cnt, nums[i]);
            maxSum = max(cnt, maxSum);
        }  
         
        return maxSum;
    }
};
