class Solution {
public:
    string addStrings(string num1, string num2) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        string str = "";
        int m = num1.length()-1, n = num2.length()-1;
        
        int carry = 0, sum;
        while(m >= 0 || n >= 0 || carry != 0){
            sum = carry + (m>=0? (num1[m] - '0') : 0) + (n>=0? (num2[n] - '0') : 0);
            carry = (sum >= 10) ? 1 : 0;
            str += (sum % 10) + '0';
            
            m--;
            n--;
        }
        reverse(str.begin(), str.end());
        return str;
    }
};
