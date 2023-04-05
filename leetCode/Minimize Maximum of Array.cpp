class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);

        long long pSum = 0;
        double value = 0;
        for(int i=0; i<nums.size(); i++){
            pSum += nums[i];
            value = max(value, ceil(pSum*1.0/(i+1)));
        }
        return value;
    }
};
