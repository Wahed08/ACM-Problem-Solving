class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        vector<int>vec;
        
        while(nums.size() != 1){
            for(int i=0; i<nums.size()-1; i++){
                vec.push_back((nums[i] + nums[i+1]) % 10);
            }
            nums = vec;
            vec.clear();
        }
        
        return nums[0];
    }
};
