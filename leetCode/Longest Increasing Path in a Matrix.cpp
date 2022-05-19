class Solution {
public:
    int d[4][2] = {{0,1}, {1, 0}, {0,-1}, {-1, 0}};
    vector<vector<int>>vec;
    
    int dfsTraversal(int i, int j, int row, int col,vector<vector<int>>&matrix){
        
        if(vec[i][j] != 0)
            return vec[i][j];
        
        vec[i][j]++;
        for(int k=0; k<4; k++){
            int x = i + d[k][0];
            int y = j + d[k][1];
            
            if(x>=0 and x<row and y>=0 and y<col){
                if(matrix[x][y] > matrix[i][j]){
                    vec[i][j]  = max(vec[i][j], dfsTraversal(x,y,row,col,matrix)+1);
                }
            }
        }
        return vec[i][j];
    }
    
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int row = matrix.size(), col = matrix[0].size(), ans = 0;
        vec.resize(row, vector<int>(col, 0));
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                ans = max(ans, dfsTraversal(i, j, row, col, matrix));
            }
        }
        return ans;
    }
};
