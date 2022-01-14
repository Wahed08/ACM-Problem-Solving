class Solution {
public:
    int myAtoi(string s) {
       long long res = 0, i = 0;
        int sign = 1, cnt = 0;
        while(s[i] == ' '){
            i++;
        }
        if(s[i] == '-'){
            sign = -1;
            cnt++;
            i++;
        }
        if(s[i] == '+'){
            sign = 1;
            cnt++;
            i++;
        }
        if(cnt == 2)
            return 0;
        
        while(isdigit(s[i])){
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > 7)){
                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
             }
            res = 10 * res + (s[i] - '0');
            i++;
        }
        return res*sign;
    }
};
