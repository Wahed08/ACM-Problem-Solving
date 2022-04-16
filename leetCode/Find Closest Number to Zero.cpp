class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        int value = INT_MAX;
        map<int, int>mapp;
        
        for(int i=0; i<n; i++) mapp[nums[i]]++;
        for(int i=0; i<n; i++) value = min(value, abs(nums[i]));
        
        if(mapp.find(value) != mapp.end())
            return value;
        
        return -value;
    }
};
