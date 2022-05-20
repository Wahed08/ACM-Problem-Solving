class Solution {
public:
    int way = 0;
    int dfsTraversal(vector<vector<int>>& matrix,int i, int j,int row, int col, vector<vector<int>>&vec){
        
        if(i >= row or j >= col)
            return 0;
        if(matrix[i][j] == 1)
            return 0;
        if(i == row-1 and j == col-1){
            way++;
            return 1;
        }
        if(vec[i][j] != 0){
            way += vec[i][j];
            return vec[i][j];
        }
        else{
            return vec[i][j] = dfsTraversal(matrix, i+1, j, row, col, vec) + dfsTraversal(matrix, i, j+1, row, col, vec);
        }
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int row = obstacleGrid.size(), col = obstacleGrid[0].size();
        vector<vector<int>>vec(row, vector<int>(col,0));
        
        if(obstacleGrid[row-1][col-1] == 1)
            return 0;
        
        dfsTraversal(obstacleGrid, 0, 0, row, col, vec);
        
        return way;
    }
};
