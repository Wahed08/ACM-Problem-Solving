// O(n) space complexity

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int row = matrix.size();
        vector<int>vec;
        
        for(int i=0; i<row; i++) vec.insert(vec.end(), matrix[i].begin(), matrix[i].end());
        sort(vec.begin(), vec.end());
        
        return vec[k-1];
    }
};
