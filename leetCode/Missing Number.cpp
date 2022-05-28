class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int sum = 0;
        for(int i=0; i<=nums.size(); i++) sum += i;
        for(auto it: nums) sum -= it;
        
        return sum;
    }
};
