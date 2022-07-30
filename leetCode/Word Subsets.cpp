class Solution {
public:
    map<char, int>mp;
    bool check(string &s){
        map<char, int>m2;
        for(int i=0; i<s.length(); i++) m2[s[i]]++;
        
        for(auto x : mp){
            if(x.second > m2[x.first])
                return false;
        }
        return true;
    }
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int ln = words2.size();
        vector<string>vec;
        
        for(int i=0; i<ln; i++){
            string s = words2[i];
            map<char, int>m1;
            for(int j=0; j<s.length(); j++){
                m1[s[j]]++;
            }
             
            for(auto x : m1) mp[x.first] = max(mp[x.first], x.second);
        }
        
        for(int i=0; i<words1.size(); i++){
            if(check(words1[i])){
                vec.push_back(words1[i]);
            }
        }
        
        return vec;
    }
};
