class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = words[0].length(), ln = s.length();
        vector<int>m1(26, 0), m2(26, 0), ans;
        map<string, int>mapp;
        
        for(int i=0; i<words.size(); i++){
            string str = words[i];
            for(int j=0; j<n; j++){
                m1[str[j] - 'a']++;
            }
            mapp[str]++;
        } 
        int k = n*words.size();
        
        for(int i=0, j=0; i<ln; i++){
            m2[s[i] - 'a']++;
            
            if(i+1 >= k){
                if(m1 == m2){
                    string str = "";
                    map<string, int> mapp2;
                    for(int x = i-k+1; x<i+1; x++){
                        str += s[x];
                        if(str.length() == n){
                            mapp2[str]++;
                            str.clear();
                        }
                    }
                    if(mapp == mapp2) ans.push_back(i-k+1);
                }
                m2[s[j++] - 'a']--;
            }
        }
        return ans;
    }
};
