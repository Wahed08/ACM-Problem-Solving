class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int length = coins.size();
        
        vector<long>one(amount+1, INT_MAX);
        one[0] = 0;
        // vector<long>two(amount+1, -1); //for find the which coins make amount
        
        for(int i=0; i<length; i++){
            for(int j = 0; j <= amount; j++){
                if(j >= coins[i]){
                    one[j] = min(one[j], 1 + one[j-coins[i]]);
                    // two[j] = i;
                }
            }
        }
        //vector<int>vec;
        // while(amount != 0){
        //     vec.push_back(coins[two[amount]]); // this code is for which coins make the amount actually
        //     amount -= coins[two[amount]];
        // }
        // for(auto it : vec) cout<<it<<" ";
        
        if(one[amount] == INT_MAX)
            return -1;
        return one[amount];
    }
};
