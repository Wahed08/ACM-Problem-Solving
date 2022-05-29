//Good stuff though!
//learned new things from this problem!


class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = words.size(), cnt=0;
        vector<bitset<26> > vec(n);
        
        for(int i=0; i<n; i++){
            string s = words[i];
            for(int k=0; k<s.length(); k++)
                vec[i][s[k]-'a'] = 1;
                
            for(int j=0; j<i; j++){
               if((vec[i] & vec[j]) == 0){
                   int x = words[i].length() * words[j].length();
                   cnt = max(cnt, x);
               }
           }
        }
        return cnt;
    }
};
