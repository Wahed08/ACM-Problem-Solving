class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int ln = prices.size();
        int cnt = prices[0], flag, sum = 0;
        
        for(int i=0; i<ln-1; i++){
           cnt = min(cnt, prices[i+1]);
           if(cnt == prices[i+1])
               continue;
            else{
                sum = max(sum, abs(cnt-prices[i+1]));
            }
        }
    
        return sum;
    }
};
