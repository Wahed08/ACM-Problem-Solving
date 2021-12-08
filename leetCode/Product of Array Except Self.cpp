class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int32_t cnt = 1;
        int flag = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                flag++;
                cnt *= nums[i];
            }
        }
        
        for(int i=0; i<nums.size(); i++){
            if(flag == nums.size() - 1){
                if(nums[i] != 0)
                    nums[i] = 0;
                else nums[i] = cnt;
            }
            else if(flag < nums.size()-1){
                nums[i] = 0;
            }
            else
                nums[i] = cnt / nums[i];    
        }
        
        return nums;
    }
};
