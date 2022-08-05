// Got TLE(8/15)

class Solution {
public:
    set<vector<int>>st;
    void combination(vector<int>&vec, int target, vector<int>&v){
        
        if(target == 0){
            st.insert(v);
            return;
        }
        if(target < 0) return;    

        for(int i=0; i<vec.size(); i++){
            target -= vec[i];
            v.push_back(vec[i]);
            combination(vec, target, v);
            target += vec[i];
            v.pop_back();
        }
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int>v;
        combination(nums, target, v);
        
        return st.size();
    }
};
