class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int k = 0, j = nums.size()-1;
        int n = nums.size();
        int count = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                nums[k++] = nums[i];
            }else{
                count++;
            }
        }
        for(int i=0; i<count; i++){
            nums[k++] = 0;
        }
    }
};
