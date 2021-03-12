class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int m=word1.length();
        int n=word2.length();
        
        int edit[m+1][n+1];
        
        for(int i=0; i<=m; i++){
            for(int j=0; j<=n; j++){
                // if(i==0){
                //     edit[i][j] = j;
                // }else if(j==0){
                //     edit[i][j] = i;
                // }
                if(i==0 || j==0){
                    edit[i][j] = i+j;
                }
                 else if(word1[i-1] == word2[j-1]){
                    edit[i][j] = edit[i-1][j-1];
                }else{
                    edit[i][j] = 1 + min(edit[i-1][j],edit[i][j-1]);
                }
            }
        }
        return edit[m][n];
    }
};
