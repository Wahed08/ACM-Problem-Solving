class Solution {
public:
    char findTheDifference(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        map<char, int>mp;
        for(int i=0; i<t.length(); i++){
            mp[t[i]]++;
        }
        
        for(int i=0; i<s.length(); i++){
            mp[s[i]]--;
        }
        char ch;
        
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second == 1){
                ch = it->first;
                break;
            }
        }
        return ch;
    }
};
