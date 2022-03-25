 bool compare(vector<int>&a, vector<int>&b){
        return (a[1] - a[0]) > (b[1] - b[0]);
 }

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
       
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = costs.size(), count = 0;
        sort(costs.begin(), costs.end(), compare);
        
        for(int i=0; i<n; i++){
            if(i >= n/2)
                count += costs[i][1];
            else
                count += costs[i][0]; 
        }
        
        return count;
    }
};
