class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int sum = 0, ln=32;
        while(ln--){
            sum = 2LL*sum + n%2;
            n >>= 1;
        }
        
        return sum;
    }
};
