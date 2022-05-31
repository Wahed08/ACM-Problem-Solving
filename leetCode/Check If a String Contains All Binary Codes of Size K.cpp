class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int ln = s.length();
        map<string, int>mapp;
        
        for(int i = 0; i <= ln - k; i++) {
            if(mapp.find(s.substr(i, k)) == mapp.end()){
                 mapp.insert({s.substr(i, k), 1});   
            }
        }
        
        return mapp.size() == pow(2, k);
    }
};
