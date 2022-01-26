class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        int cnt = 1, j=0;
        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1] && cnt == 1){
                nums[j++] = nums[i];
                cnt++;
            }else if(nums[i] != nums[i+1]){
                cnt = 1;
            }
        }
        nums.erase(nums.begin()+j, nums.end());
        return nums;
    }
};
