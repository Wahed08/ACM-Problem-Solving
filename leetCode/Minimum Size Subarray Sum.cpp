class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        int count = 0, j=0, sum = 0;
        int value = INT_MAX;
        
        for(int i=0; i<n; i++){
            sum += nums[i];
            count++;
            while(sum >= target){
                value = min(value, count);
                sum -= nums[j++];
                count--;
            }
        }
        
        if(value == INT_MAX)
            return 0;
        return value;
    }
};
