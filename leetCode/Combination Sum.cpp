class Solution {
public:
    void findCombinations(vector<vector<int>>&vec, vector<int>&v, vector<int>&candidates, int target){
        if(target == 0){
            vec.push_back(v);
            return;
        }
        if(target < 0){
            return;    
        }
        else{
            for(int i=0; i<candidates.size(); i++){
                v.push_back(candidates[i]);
                target -= candidates[i];
                findCombinations(vec, v, candidates, target);
                v.pop_back();
                target += candidates[i];
            }
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        set<vector<int>>st;
        vector<vector<int>>vec;
        vector<vector<int>>ans;
        vector<int>v;
        
        findCombinations(vec, v, candidates, target);
        int i = -1;
        for(auto it : vec){
            vector<int>v{it};
            sort(v.begin(), v.end());
            st.insert(v);
        }
        for(auto it : st)
            ans.push_back(it);
        
        return ans;
    }
};
