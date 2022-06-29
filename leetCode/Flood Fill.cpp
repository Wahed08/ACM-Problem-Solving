class Solution {
public:
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    void dfs(vector<vector<int>>& image,int sr,int sc,int newColor,int x){
        
        if(sr<0 or sr>=image.size() or sc<0 or sc>=image[0].size() or image[sr][sc]!=x) return;
        
        image[sr][sc]=newColor;
        for(int i=0; i<4; i++){
            int x1 = dx[i] + sr;
            int y1 = dy[i] + sc;
            dfs(image, x1, y1, newColor,x);
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        if(image[sr][sc] == newColor) return image;
        int x = image[sr][sc];
        
        dfs(image, sr, sc, newColor, x);
        return image;
    }
};
