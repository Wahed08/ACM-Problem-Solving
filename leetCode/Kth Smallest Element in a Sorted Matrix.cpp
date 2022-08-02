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


// O(1) space complexity

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = matrix.size();
        int start = matrix[0][0], end = matrix[n-1][n-1];
        
        while(start < end){
            int mid = start + (end-start)/2;
            int count=0;
            for(int i=0; i<n; i++)
                count += upper_bound(matrix[i].begin(),matrix[i].end(),mid) - matrix[i].begin();

            if(count < k) start = mid+1;
            else end = mid;
        }
        return start;
    }
};
