class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
       int n = nums.size();
       bool flag[n+1];
        
        for(int i=0; i<=n; i++){
            flag[i] = 0;
        }
        
        for(int i=0; i<n; i++){
            if(nums[i] > 0 && nums[i] <= n)
            flag[nums[i]] = true;
        }
        
        for(int i=1; i<=n; i++){
            if(flag[i] != 1){
                return i;
            }
        }
        return n+1;
    }
};
