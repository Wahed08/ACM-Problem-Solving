class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size(), prefix = 0;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(n == 1) return 0;
        if(prefix == (sum-nums[0])) return 0;
        
        for(int i=1; i<n; i++){
            prefix += nums[i-1];
            int x = sum - (prefix + nums[i]);
            if(prefix == x) return i;
        }
        return -1;
    }
};
