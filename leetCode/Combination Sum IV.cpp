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


// Accepted dp memoization

class Solution {
public:
    int combination(vector<int>&vec, int target, map<int, int>&dp){
        
        if(target == 0) return 1;
        if(target < 0) return 0;    
        if(dp.find(target) != dp.end()) return dp[target];
        
        for(int i=0; i<vec.size(); i++){
            dp[target] += combination(vec, target-vec[i], dp);
        }
        return dp[target];
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        map<int, int>dp;
        return combination(nums, target, dp);
    }
};


// More faster
class Solution {
public:
    int combination(vector<int>&vec, int target, vector<int>&dp){
        
        if(target == 0) return 1;
        if(target < 0) return 0;    
        if(dp[target] != -1) return dp[target];
        
        int ans = 0;
        for(int i=0; i<vec.size(); i++){
            if(target >= vec[i]){
                ans += combination(vec, target-vec[i], dp);
            }
        }
        return dp[target] = ans;
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int>dp(target+1, -1);
        return combination(nums, target, dp);
    }
};
