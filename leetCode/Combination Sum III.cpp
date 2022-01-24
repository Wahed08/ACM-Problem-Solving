class Solution {
public:
       void findCombinations(vector<vector<int>>&vec, vector<int>&v, int idx, int k, int n){
            if(v.size() == k){
                int sum = 0;
                for(int i=0; i<v.size(); i++){
                    sum += v[i];
                }
                if(sum == n)
                    vec.push_back(v);
                return;
            }else{
                for(int i=idx; i<=9; i++){
                        v.push_back(i);
                        findCombinations(vec, v, i+1, k, n);
                        v.pop_back();
                }
            }
        }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<vector<int>>vec;
        vector<int>v;
        vector<int>nums;
        
        findCombinations(vec, v, 1, k, n);
        return vec;
    }
};
