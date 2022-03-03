class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        for(int i=0; i<m; i++){
            int start = 0, end = matrix[i].size()-1;
            while(start <= end){
                int mid = start+ (end-start)/2;
                if(matrix[i][mid] == target)
                    return true;
                else if(matrix[i][mid] < target)
                    start = mid+1;
                else
                    end = mid-1;
            }
        }
        return false;
    }
};
