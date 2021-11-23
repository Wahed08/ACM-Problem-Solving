class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        vector<int>vec, vec1;
        for(int i=0; i<nums.size(); i++){
            vec.push_back(nums[i]);
        }
       sort(nums.begin(), nums.end());
       
        int i = 0, j = nums.size() - 1, cnt1, cnt2;
        
        while(i < j){
            if(nums[i] + nums[j] == target){
                cnt1 = nums[i];
                cnt2 = nums[j];
                break;
            }else if(nums[i] + nums[j] < target)
                i++;
            else
                j--;
        }
        for(int i=0; i<vec.size(); i++){
            if(cnt1 == vec[i])
                vec1.push_back(i);
           
            else if(cnt2 == vec[i])
                vec1.push_back(i);
            
        }
        return vec1;
    }
};
