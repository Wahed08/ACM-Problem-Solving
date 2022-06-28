class Solution {
public:
    int backTrack(vector<int>&cost, int i, int n, vector<int>&vec){
        
        if(i == n-1) return min(cost[n-1], cost[n-2]);
        if(i >= n) return 0;
        if(vec[i] != 0) return vec[i];
        return vec[i] = cost[i] + min(backTrack(cost, i+1, n, vec), backTrack(cost, i+2, n, vec));
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = cost.size();
        if(n == 2) return min(cost[0], cost[1]);
        
        vector<int>vec(n);
        backTrack(cost, 0, n, vec);
        
        return min(vec[0], vec[1]);
    }
};
