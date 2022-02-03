class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int cnt = 1, k = nums[0], value = 1;
        
        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]){
                cnt++;
            }else{
                if(value <= cnt)
                    k = nums[i-1];
                value = max(cnt, value);
                cnt = 1;
            }
        }
        if(cnt >= value)
            return nums[n-1];
      
        return k;
    }
};
