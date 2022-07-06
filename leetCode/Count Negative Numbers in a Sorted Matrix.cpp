class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int row = grid.size(), col = grid[0].size();
        int start = 0, end = col-1, ans=0;
        
        while(start < row and end >= 0){
            int value = grid[start][end];
            if(value < 0){
                end--;
                ans += row-start;
            }
            else{
                start++;
            }
        }
        return ans;
    }
};
