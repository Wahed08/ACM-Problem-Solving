class Solution {
public:
    
    void findPermutations(vector<vector<int>>&vec, vector<int>&v, vector<int>&nums, vector<int>&vis){
            if(v.size() == nums.size()){
                vec.push_back(v);
                return;
            }else{
                for(int i = 0; i<nums.size(); i++){
                    if(!vis[i]){
                        v.push_back(nums[i]);
                        vis[i] = 1;
                        findPermutations(vec, v, nums, vis);
                        v.pop_back();
                        vis[i] = 0;
                    }
                }
            }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<vector<int>>vec;
        vector<int>v;
        vector<int>vis(nums.size(), 0);
        
        findPermutations(vec, v, nums, vis);
        return vec;
    }
};
