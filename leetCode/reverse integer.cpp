class Solution {
public:
    int32_t reverse(int32_t x) {
        int32_t value=0, y=0;
        while(x!=0){
            value = x % 10;
            x = x / 10 ;
            if(y > INT_MAX/10 ||  (y == INT_MAX / 10 && value > 7)) return 0;
            if (y < INT_MIN/10 || (y == INT_MIN / 10 && value < -8)) return 0;
            y = y*10 + value;
        }
        return y;
    }
};
