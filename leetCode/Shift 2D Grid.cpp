class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int row = grid.size();
        int col = grid[0].size();
        int mod = row*col;
        vector<int>vec;
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                vec.push_back(grid[i][j]);
            }
        }
        
        for(int i=0; i<k%mod; i++){
            vec.insert(vec.begin(), vec.back());
            vec.pop_back();
        }
        int x=0;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                grid[i][j] = vec[x++];
            }
        }
        
        return grid;
    }
};
