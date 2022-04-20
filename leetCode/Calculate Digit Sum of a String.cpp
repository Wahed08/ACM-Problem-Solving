class Solution {
public:
    string digitSum(string s, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        while(s.length() > k){
            
            string str;
            int n = s.length();
            int sum = 0, x=0;
            
            for(int i=0; i<n; i++){
    
                sum += s[i] - '0';
                x++;
                if(x == k){
                    str += to_string(sum);
                    sum = 0,x=0;
                }
            }
            if(x > 0)
                str += to_string(sum);
            s = str;
        }
        return s;
    }
};
