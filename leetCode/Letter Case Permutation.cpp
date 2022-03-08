class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = s.length();
        int count  = 0;
        
        for(char i : s){
            if(!isdigit(i))
                count++;
        }
        int k = pow(2,count);
        vector<string> ans;
        for(int i=0; i<k; i++){
            int x = i;
            string str="",str2 = s;
            while(x != 0){
                str += x % 2 + '0';
                x >>= 1;
            }
            if(str.length() < count) {
                for(int j = str.length(); j < count; j++)
                    str += '0';
            }
            for(int j = 0, k = 0; j<n; j++){
               if(!isdigit(s[j])){
                   if(str[k++] == '1')
                       str2[j] = toupper(str2[j]);
                   else
                       str2[j] = tolower(str2[j]);
               }
            }
            ans.push_back(str2);
        }
        
        return ans;
    }
};
