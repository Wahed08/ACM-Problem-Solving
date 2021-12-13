class Solution {
public:
    int maxPower(string s) {
       
        int count = 1, val = 1;
        
        for(int i=0; i<s.length()-1; i++){
            if(s[i] == s[i+1]){
                count++;
                val = max(val, count);
            }else 
                count = 1;
        }
        return val;
    }
};
