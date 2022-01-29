class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int length = coins.size();
        sort(coins.begin(), coins.end());
        vector<vector<long>>vec(length+1, vector<long>(amount+1));
           
        for(int i=0; i<=length; i++)
            vec[i][0] = 1;
        
        for(int i=0; i<=amount; i++)
            vec[0][i] = 0;
        
        for(int i=1; i<=length; i++){
            for(int j=1; j<=amount; j++){
                if(j >= coins[i-1]){
                    vec[i][j] = vec[i][j-coins[i-1]] + vec[i-1][j];
                }else{
                    vec[i][j] = vec[i-1][j];
                }
            }
        }
       
        return vec[length][amount];
    }
};
