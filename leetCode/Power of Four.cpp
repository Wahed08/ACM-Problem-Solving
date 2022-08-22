class Solution {
public:
    bool isPowerOfFour(int n) {
       
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        if(n <= 0) return false;
        int32_t k = log(n) / log(4);
        if(pow(4, k) == n) return true;
        return false;
    }
};


//
class Solution {
public:
    bool isPowerOfFour(int n) {
       
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        return n <= 0 ? false : log(n)/log(4) == floor(log(n)/log(4));
    }
};
