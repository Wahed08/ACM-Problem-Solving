class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int m = t.length();
        int n = s.length();
        int count = 0;
        
        if(m == 0 && n == 0)
            return true;
        if(m == 0)
            return false;
        if(n == 0)
            return true;
        
        int i = n-1;
        int j = m-1;
        
        while(j != -1){
            if(s[i] == t[j]){
                j--;
                i--;
                count++;
                if(i == -1)
                    break;
            }else{
                j--;
            }
        }
        if(count == s.length())
            return true;
        return false;
    }
};
