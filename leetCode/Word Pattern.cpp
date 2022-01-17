class Solution {
public:
    bool wordPattern(string pattern, string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        stringstream str(s);
        vector<string>vec;
        string word;
        int count = 0;
        
        while(str >> word){
            count++;
            vec.push_back(word);
        }
        if(pattern.length() != count)
            return false;
        
        map<char, string>mp;
        
        for(int i=0; i<pattern.length(); i++){
            char ch = pattern[i];
            if(mp.find(ch) != mp.end()){
                if(mp[ch] != vec[i])
                    return false;
            }else{
                for(auto it=mp.begin(); it!=mp.end(); it++){
                    if(it->second == vec[i])
                        return false;
                }
                mp.insert({ch, vec[i]});
            }
        }
        
        return true;
    }
};
