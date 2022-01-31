class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        
        int sum = 0, value = 0;
        for(int i=0; i<n; i++){
            for(int j = 0; j<accounts[i].size(); j++){
                sum += accounts[i][j];
            }
            value = max(value, sum);
            sum = 0;
        }
        return value;
    }
};
