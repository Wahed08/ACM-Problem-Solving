class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int start = 0, end = col - 1;
        
        while(start < row and end >= 0){
            int value = matrix[start][end];
            
            if(value == target)
                return true;
            else if(value < target)
                start++;
            else
                end--;
        }
        return false;
    }
};
