class Solution {
public:
    int m, n;
    int find(vector<vector<int>>& board, int i, int j, int sum){
         i-1 >= 0 and j-1 >= 0 and board[i-1][j-1]==1?sum++:sum;
         i-1 >= 0 and board[i-1][j]==1?sum++:sum;
         i-1 >= 0 and j+1 < n and board[i-1][j+1]==1?sum++:sum;
         j-1 >= 0 and board[i][j-1]==1?sum++:sum;
         j+1 < n and board[i][j+1]==1?sum++:sum;
         i+1 < m and j-1 >= 0 and board[i+1][j-1]==1?sum++:sum;
         i+1 < m and board[i+1][j]==1?sum++:sum;
         i+1 < m and j+1 < n and board[i+1][j+1]==1?sum++:sum;
        
        return sum;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        m = board.size();
        n = board[0].size();
        vector<int>vec;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int sum = 0;
                if(board[i][j]==1){
                    int val = find(board, i, j, sum);
                    if(val == 2 || val == 3)
                        vec.push_back(1);
                    else
                        vec.push_back(0);
                }
                else{
                    int val = find(board, i, j, sum);
                    if(val == 3)
                        vec.push_back(1);
                    else
                        vec.push_back(0);
                }
            }
        }
        
        int x=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                board[i][j] = vec[x++];
            }
        }
    }
};
