class Solution {
public:
    int removePalindromeSub(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        string p = s;
        reverse(p.begin(), p.end());
        if(p == s)
            return 1;
        return 2;
    }
};
