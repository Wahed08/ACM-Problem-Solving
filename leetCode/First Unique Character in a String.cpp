class Solution {
public:
    int firstUniqChar(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        map<char, int>mp;
        for(int i=0; i<s.length(); i++) mp[s[i]]++;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]--;
            if(mp[s[i]] == 0) return i;
            else mp[s[i]]++;
        }
        return -1;
    }
};
