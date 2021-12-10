class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int32_t  maxValue = 0, cnt = 1;
        
        if(nums.size() == 1)
            return nums[0];
        
        for(int i=0; i<nums.size(); i++){
            cnt *= nums[i];
            maxValue = max(cnt, maxValue);
             if(cnt == 0) 
                cnt = 1;
        }  
        
        cnt = 1;
        
        
        for(int i=nums.size()-1; i>=0; i--){
            cnt *= nums[i];
            maxValue = max(cnt, maxValue);
            if(cnt == 0) 
                cnt = 1;
        }   
        
        return maxValue;
    }
};
