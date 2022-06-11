// nice solution
// finding the largest subarray that sum equals to totalSum - x(target)

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int left = 0, right = 0, ans = INT_MAX, sum = 0, ln = nums.size();
        for(auto it : nums) sum += it;
        
        while(left <= right){
            if(sum >= x){
                if(sum == x)
                    ans = min(ans, left + ln - right);
                if(right < ln)
                    sum -= nums[right++]; 
                else
                    break;
            }else
                sum += nums[left++];
        }
        if(ans == INT_MAX)
            return -1;
        return ans;
    }
};
