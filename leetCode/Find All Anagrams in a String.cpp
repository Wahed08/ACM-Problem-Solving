class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int> a(26,0);
        vector<int> b(26,0);
        vector<int>vec;

        for(int i=0; i<p.size(); i++){
            a[p[i]-'a']++;
        }
        int ln = p.length();
        
        for(int i=0,j=0; i<s.size(); i++){
            b[s[i]-'a']++;    
            
            if(i+1 >= p.size()){
                if(a == b){
                    vec.push_back(i-ln+1);
                }
                b[s[j++]-'a']--;
            }
        }
        return vec;
    }
};
