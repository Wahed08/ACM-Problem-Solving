class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>>vec(rows+1, vector<int>(cols+1, 0));
        
        
        int value = 0;
        
        for(int i=0; i<=rows; i++){
            for(int j=0; j<=cols; j++){
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }
        
        for(int i=1; i<=rows; i++){
            for(int j=1; j<=cols; j++){
               if(matrix[i-1][j-1] == '1'){
                   vec[i][j] = 1 + min(min(vec[i][j-1], vec[i-1][j]), vec[i-1][j-1]);
                   if(vec[i][j] > value)
                       value = vec[i][j];
               }
            }
        }
        return value*value;
    }
};
