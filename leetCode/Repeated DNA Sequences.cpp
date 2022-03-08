class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int ln = s.length();
        map<string, int>mapp;
        vector<string>vec;
        
        if(ln < 10)
            return {};

        for(int i=0; i<ln; i++){
            string str = s.substr(i, 10);
            mapp[str]++;
            if (mapp[str] == 2)
                vec.push_back(str);
        }
        
        return vec;
    }
};
