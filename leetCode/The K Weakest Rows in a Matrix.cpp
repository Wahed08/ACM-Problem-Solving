class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = mat.size();
        multimap<int, int>mapp;
        vector<int>vec;
        
        for(int i=0; i<n; i++){
            vector<int>v = mat[i];
            int count = 0;
            for(int i=0; i<v.size(); i++){
                if(v[i] == 1){
                    count++;
                }
            }
            mapp.insert({count, i});
        }
        
        for(auto it : mapp){
            cout<<it.second<<" ";
            if(k != 0){
                vec.push_back(it.second);
                k--;
            }
        }
        return vec;
    }
};
