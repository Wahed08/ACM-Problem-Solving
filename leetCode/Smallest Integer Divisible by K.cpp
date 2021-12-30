class Solution {
public:
    int smallestRepunitDivByK(int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int i = 1;
        int number = 0;
        
        for(i = 1; i<=k; i++){
            number = number * 10 + 1;
            number = number%k;
            if(number%k == 0)
                return i;
        }
        return -1;
    }
};
