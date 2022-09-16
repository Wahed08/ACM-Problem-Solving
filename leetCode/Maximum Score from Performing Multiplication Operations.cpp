//TLE

class Solution {
public:
    int check(vector<int>&nums, vector<int>&multipliers, int left, int right, int x){
        if(x == multipliers.size()) return 0;
        
        int l = nums[left]*multipliers[x] + check(nums, multipliers, left+1, right, x+1);
        int r = nums[right]*multipliers[x] + check(nums, multipliers, left, right-1, x+1);
        
        return max(l,r);
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int m = multipliers.size();
        int n = nums.size();
        
        return check(nums, multipliers, 0, n-1, 0);
    }
};
