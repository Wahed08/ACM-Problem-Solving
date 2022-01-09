class Solution {
public:
    int integerReplacement(int n) {
        int cnt = 0;
        while(n != 1){
            if(n == 2147483647)
                return 32;
            cnt++;
            if(n % 2 == 0)
                n /= 2;
            else if(n==3){
                cnt += 1;
                break;
            }
            else if(n % 4 == 3)
                n += 1;
            else 
                n -= 1;
        }
        return cnt;
    }
};
