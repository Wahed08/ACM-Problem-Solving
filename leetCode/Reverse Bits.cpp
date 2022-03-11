class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
       
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<uint32_t>vec;
        int sum = 0, ln=0;
    
        while(n != 0){
            vec.push_back(n%2);
            n >>= 1;
            ln++;
        }
        
        for(int i=0; i<32-ln; i++) vec.push_back(0);
        for(int i=0; i<vec.size(); i++) sum = 2LL*sum + vec[i];
        
        return sum;
    }
};
