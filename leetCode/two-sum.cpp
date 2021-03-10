class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int>mapp;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(target == nums[i] + nums[j]){
                    mapp.push_back(i);
                    mapp.push_back(j);
                    break;
                }
            }
        }
        return mapp;
    }
};