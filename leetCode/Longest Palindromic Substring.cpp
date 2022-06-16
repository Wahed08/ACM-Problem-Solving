// TLE solution

class Solution {
    static bool compare(string a, string b){
        return a.length() > b.length();
}

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

//dp optimized solution
class Solution {
public: 
    string longestPalindrome(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = s.length(), ln=1, start=0;
        vector<vector<int>>dp(n, vector<int>(n,0));
        string ans="";
        
        for(int i=0; i<n; i++) dp[i][i] = 1;  //diagonal character always palindrome //for length 1
        for(int i=0; i<n-1; i++){   // for length 2 check 
            if(s[i] == s[i+1]){
                dp[i][i+1] = 1;
                start = i;
                ln = 2;
            }
        }
        
        for(int i=3; i<=n; i++){ // for length 3 to n check
            for(int j=0; j<n-i+1; j++){
                int k = i+j-1;
                if(s[j] == s[k] and dp[j+1][k-1] == 1){
                    dp[j][k] = 1;
                    if(i > ln){
                        start = j;
                        ln = i;
                    }
                }
            }
        }
        int end = start+ln-1;
        for(int i=start; i<=end; i++) ans+=s[i];
        
        return ans;
    
    }
};
