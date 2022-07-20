class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int ans = 0;
        
        unordered_map<string,int> mapp;
        
        for(string x: words) mapp[x]++;
        for(auto it: mapp){
            
            string t = it.first;
            int j = 0;
            
            if(t.length() > s.length()) continue;
            for(int i = 0; i < s.size() && j < t.size(); i++) if(s[i] == t[j]) j++;
            
            if(j == t.length()) ans += mapp[t];
        }
        return ans;
    }
};

