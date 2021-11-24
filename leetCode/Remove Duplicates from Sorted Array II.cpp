class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        int j = 0, cnt = 1;
        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1] && cnt == 1){
                cnt++;
                nums[j++] = nums[i];
            }
            else if(nums[i] != nums[i+1]){
            cnt=1;
            nums[j++] = nums[i];
            }
        
        }
        nums[j++] = nums[n-1];
        return j;
    }
};
