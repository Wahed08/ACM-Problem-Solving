bool compare(string a, string b){
    return a.length() > b.length();
}

class Solution {
public:
    
    string palindrome(vector<string>& str){
        
        string s,p;
        
        for(int i=0; i<str.size(); i++){
            s = str[i],p = str[i];
            reverse(p.begin(), p.end());
            
            if(s == p)
                break;
        }
        return s;
    }
    
    string longestPalindrome(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = s.length();
        vector<string>str;
        
        for(int i=0; i<n; i++){
            string ss;
            for(int j=i; j<n; j++){
                ss += s[j];
                str.push_back(ss);
            }
        }
        
        sort(str.begin(), str.end(), compare);
        return palindrome(str);
    
    }
};
