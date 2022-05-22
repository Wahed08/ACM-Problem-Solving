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

// another good way

class Solution {
public:
    
    int countSubstrings(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int cnt = 0, n = s.length();
        
        for(int i=0; i<n; i++){
            int left = i, right = i;
            //for odd length check
            while(left >= 0 and right < n and s[left] == s[right]){
                cnt++;
                left--; 
                right++;
            }
            
            left = i, right = i+1;
            //for even length check
            while(left >= 0 and right < n and s[left] == s[right]){
                cnt++;
                left--;
                right++;
            }
        }
        
        return cnt;
    }
};
