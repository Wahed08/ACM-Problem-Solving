class Solution {
public:
    int paths(int i, int j, int m, int n, vector<vector<int>>&vec){
        if(i >= m && j >= n)
            return 0;
        if(i == m-1 || j == n-1)
            return 1;
        if(vec[i][j] != -1)
            return vec[i][j];
        else 
            return vec[i][j] = paths(i+1, j, m, n, vec) + paths(i, j+1, m, n, vec);
    }
    
    int uniquePaths(int m, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        vector<vector<int>>vec(m, vector<int>(n,-1));
        
        return paths(0, 0, m, n, vec);      
    }
};
