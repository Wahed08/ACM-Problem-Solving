class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        sort(nums.begin(), nums.end());
        long n = nums.size(), k, sum = 0;
        
        if(n%2 == 0) k = (nums[n/2] + nums[n/2 - 1])/2;
        k = nums[n/2];
        
        for(int i=0; i<n; i++) sum += abs(k-nums[i]);
        return sum;
    }
};
