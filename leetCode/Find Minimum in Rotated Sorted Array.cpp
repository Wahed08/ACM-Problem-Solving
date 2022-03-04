class Solution {
public:
    int findMin(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int start = 0, end = nums.size()-1;
        int k = nums[0];
        
        if(nums.size() == 1)
            return nums[0];
        
        if(nums.size() == 2){
            if(nums[0] > nums[1])
                return nums[1];
            return nums[0];
        }
        
        while(start <= end){
            int mid = start + (end-start)/2;
            
            if(nums[mid] < nums[mid-1]){
                k = nums[mid];
                break;
            }
            else if(nums[mid] > nums[0]){
                start++;
            }else
                end--;
        }
        return k;
    }
};
