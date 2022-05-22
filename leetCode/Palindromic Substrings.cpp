class Solution {
public:
    
    bool checkPalindrome(string s){
        for(int i=0, j = s.length()-1; i<j; i++, j--){
            if(s[i] != s[j]){
                return false;
            }
        }
        return true;
    }
    
    int countSubstrings(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<string>str;
        int cnt=0;
        
        for(int i=0; i<s.length(); i++){
            string x;
            for(int j=i; j<s.length(); j++){
                x += s[j];
                if(checkPalindrome(x)){
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};
