class Solution {
public:
    int minDistance(string word1, string word2) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int m = word1.length(), n = word2.length();
        vector<vector<int>>vec(n+1, vector<int>(m+1));
        
        for(int i=0; i<=m; i++) vec[0][i] = i;
        for(int i=0; i<=n; i++) vec[i][0] = i;
        
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=m; j++){
                if(word2[i-1] == word1[j-1])
                    vec[i][j] = vec[i-1][j-1];
                else
                    vec[i][j] = 1 + min(min(vec[i-1][j], vec[i][j-1]), vec[i-1][j-1]);
            }
        }
        
        return vec[n][m];
    }
};
