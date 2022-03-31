class Solution {
public:
    bool split(vector<int>& nums, int maxSum, int m) {
        
        int total = 0;
        int currentSum = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(currentSum + nums[i] <= maxSum) {
                currentSum += nums[i];
            }
            else {
                currentSum = nums[i];
                total++;
            }
        }
        return (total + 1) <= m;
    }
    
    int splitArray(vector<int>& nums, int m) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int low = 0, high = 0, sum = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            high += nums[i];
            low = max(low, nums[i]);
        }
        
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(split(nums, mid, m)) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};
