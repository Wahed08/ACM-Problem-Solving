class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string p) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<string>ans;
        
        for(int i=0; i<words.size(); i++){
            string s = words[i];
            int flag = 1;
            map<char, char>m1, m2;
            for(int j=0; j<p.length(); j++){
                char c1 = s[j];
                char c2 = p[j];
                
                if(m1[c2] == 0 and m2[c1] == 0){
                    m1[c2] = c1;
                    m2[c1] = c2;
                    continue;
                }
                else if(m1[c2] == c1 and m2[c1] == c2) continue;
                else flag = 0;
            }
            if(flag == 1) ans.push_back(s);
        }
        return ans;
    }
};
