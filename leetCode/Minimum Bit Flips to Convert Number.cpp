class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        long num = start^goal;
        int cnt = 0;
        
        while(num > 0){
            cnt++;
            num &= (num-1);
        }
        
        return cnt;
    }
};
