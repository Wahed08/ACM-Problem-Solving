class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = k%nums.size();
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+n);
        reverse(nums.begin()+n, nums.end());
    }
};
