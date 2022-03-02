class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int arr[rowIndex+1][rowIndex+1];
        vector<int>v;
        vector<vector<int>>vec;
        
        for(int i=0; i<=rowIndex; i++){
            for(int j=0; j<=i; j++){
                if(i == j || j == 0)
                    arr[i][j] = 1;
                else
                    arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
                v.push_back(arr[i][j]);
            }
            vec.push_back(v);
            v.clear();
        }
        
        return vec[rowIndex];
    }
};
