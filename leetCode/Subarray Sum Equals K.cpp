class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
       int count = 0;
       int sum = 0;
        
        map<int, int>mp;
        mp[0] = 1;
        
        for(int i=0; i<nums.size(); i++){
           sum += nums[i];
           int res = sum - k;
           if(mp[res]){
               count += mp[res];
           }
            
            mp[sum]++;
        }
        
        return count;
    }
};
