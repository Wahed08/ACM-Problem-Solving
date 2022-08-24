class Solution {
public:
    bool isPowerOfThree(int n) {
       
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        if(n <= 0) return false;
        double x = log10(n)/log10(3);
        
        return (x - (int)x) == 0;
    }
};    

