class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        map<int, int>mapp;
        vector<int>vec;
        int k = changed.size();
        sort(changed.begin(), changed.end());
        for(auto it : changed) mapp[it]++;
        
        for(int i=k-1; i>=0; i--){
            if(changed[i] % 2 != 0) continue;
            int x = changed[i] / 2;
            if(mapp[changed[i]]>0 and mapp[changed[i]]-- and mapp.find(x) != mapp.end() and mapp[x]>0){
                vec.push_back(x);
                mapp[x]--;
            }
        }
        if(k % 2 == 0 and vec.size() == k/2) return vec;
        return {};
    }
};
