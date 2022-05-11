class Solution {
public:
     void findCombinations(vector<vector<int>>&vec, vector<int>&v, int idx, int k, int n){
        if(v.size() == k){
            vec.push_back(v);
            return;
        }else{
            for(int i=idx; i<=n; i++){
                v.push_back(i);
                findCombinations(vec, v, i+1, k, n);
                v.pop_back();
            }
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<vector<int>>vec;
        vector<int>v;
        vector<int>nums;
        
        findCombinations(vec, v, 1, k, n);
        return vec;
    }
};
