class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
ios_base::sync_with_stdio(false);
cin.tie(0), cout.tie(0);
        
vector<vector<int>>ans;
int row = matrix.size();
int col = matrix[0].size();
        
for(int i=0; i<col;i++){
vector<int>vec;
for(int j=0; j<row; j++){
 vec.push_back(matrix[j][i]);
}
ans.push_back(vec);
}
   return ans;     
    }
};
