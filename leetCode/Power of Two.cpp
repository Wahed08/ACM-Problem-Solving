class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n <= 0)
           return false;
        int32_t k = log(n) / log(2);
        
        if(pow(2, k) == n)
            return true;
        else if(k == 0)
            return true;
        else 
            return false;
    }
};
