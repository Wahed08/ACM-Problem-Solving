class Solution {
public:
     void findPermutations(set<vector<int>>&st, vector<int>&v, vector<int>&nums, vector<int>&vis){
            if(v.size() == nums.size()){
                st.insert(v);
                return;
            }else{
                for(int i = 0; i<nums.size(); i++){
                    if(!vis[i]){
                        v.push_back(nums[i]);
                        vis[i] = 1;
                        findPermutations(st, v, nums, vis);
                        v.pop_back();
                        vis[i] = 0;
                    }
                }
            }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);

        vector<vector<int>>vec;
        vector<int>v;
        vector<int>vis(nums.size(), 0);
        set<vector<int>>st;

        findPermutations(st, v, nums, vis);
        for(auto it = st.begin(); it != st.end(); it++){
            vec.push_back(*it);
        }
        return vec;
    }
};
