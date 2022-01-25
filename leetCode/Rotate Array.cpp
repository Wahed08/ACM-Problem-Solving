class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size() - k%nums.size();
        vector<int>vec;
        
        for(int i=n; i<nums.size(); i++){
            vec.push_back(nums[i]);
        }
        for(int i=0; i<n; i++){
            vec.push_back(nums[i]);
        }
        nums.clear();

        for(int i=0; i<vec.size(); i++){
            nums.push_back(vec[i]);
        }
    }
};
