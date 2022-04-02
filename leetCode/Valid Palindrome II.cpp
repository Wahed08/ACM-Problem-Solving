class Solution {
public:
    bool checkPalindrome(string s, string p){
        
        string first = s;
        string second = p;
        
        reverse(s.begin(), s.end());
        reverse(p.begin(), p.end());
        
        if(s == first or p == second)
            return true;
        return false;
    }
    
    bool validPalindrome(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = s.length();
        string p = s;
        int i = 0, j = n-1;
        
        while(i < n/2){
            if(s[i] == s[j]){
                i++,j--;
                continue;
            }
            else if(s[i] != s[j]){
                
                s.erase(s.begin() + i);
                p.erase(p.begin() + j);
                
                if(!checkPalindrome(s, p))
                    return false;
                else
                    return true;
            }
        }
        return true;
    }
};
