class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        if(n == 1) return {{1}};
        if(n == 2) return {{1},{1,1}};
        vector<vector<int>>vec = {{1}, {1,1}};
        
        for(int i=2; i<n; i++){
            vector<int>v = vec[i-1];
            vector<int>ans = {1};
            for(int i=1; i<v.size(); i++) ans.push_back(v[i]+v[i-1]);
            ans.push_back(1);
            vec.push_back(ans);
        }
        return vec;
    }
};
