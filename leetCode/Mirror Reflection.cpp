class Solution {
public:
    int mirrorReflection(int p, int q) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        while(p%2 == 0 and q%2 == 0) p /= 2,q /= 2;
        
        if(p % 2 == 0 and q % 2 != 0) return 2;
        if(p % 2 != 0 and q % 2 != 0) return 1;
        
        return 0;
    }
};
