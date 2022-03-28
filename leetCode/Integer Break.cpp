class Solution {
public:
    int integerBreak(int n) {
       
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        long value = 1;
        if(n == 2) return 1;
        if(n == 3) return 2;
        if(n == 4) return 4;
        
        while(n-3 >= 2){
            value *= 3;
            n -= 3;
        }
        value *= n;
        return value;
    }
};
