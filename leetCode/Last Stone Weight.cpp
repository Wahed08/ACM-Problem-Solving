class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        while(nums.size() > 1){
            
            sort(nums.begin(), nums.end());
            int large = nums[nums.size()-1];
            int secondLarge = nums[nums.size()-2];
            
            if(large == secondLarge){
                nums.erase(nums.begin()+nums.size()-2, nums.end());
            }else{
                nums.erase(nums.begin()+nums.size()-2, nums.end());
                nums.push_back(large-secondLarge);
            }
        }
        
        if(nums.size() == 0)
            return 0;
        return nums[0];
    }
};
