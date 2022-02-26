class Solution {
public:
    int lengthOfLastWord(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        string str;
        
        
        for(int i=s.length()-1; i>=0; i--){
            if(s[i] == ' ')
                continue;
            else{
                str += s[i];
                if(i > 0 and s[i-1] == ' '){
                    break;
                }
            }
        }
        return str.length();
    }
};
