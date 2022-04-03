class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
    
        int n = nums.size(), cnt = -1;
        
        for(int i=n-1; i>0; i--){
            if(nums[i] > nums[i-1]){
                cnt = i-1;
                break;
            }
        }
        if(cnt == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        
        for(int i=n-1; i>=0; i--){
            if(nums[i] > nums[cnt]){
                swap(nums[i], nums[cnt]);
                reverse(nums.begin() + cnt + 1, nums.end());
                return;
            }
        }
    }
};
