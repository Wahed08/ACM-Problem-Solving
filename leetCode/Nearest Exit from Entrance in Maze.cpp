class Solution {
public:
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1}; 
    int nearestExit(vector<vector<char>>&maze, vector<int>&e) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int m=maze.size(), n=maze[0].size(),cnt=0;
        queue<pair<pair<int, int>, int>>q;
        
        q.push({{e[0], e[1]}, cnt});
        if((e[0]==0||e[0]==m-1||e[1]==0||e[1]==n-1))maze[e[0]][e[1]]='+';
            
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                pair<pair<int, int>, int> t = q.front();
                q.pop();

                int i = t.first.first;
                int j = t.first.second;
                int val = t.second;

                if(maze[i][j]!='+'&&(i==0||i==m-1||j==0||j==n-1))return val;

                val += 1;
                for(int k=0; k<4; k++){
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if(x>=0 && x<m && y>=0 && y<n && maze[x][y]=='.'){
                        q.push({{x,y}, val});
                        maze[x][y]='*';
                    }
                }
            }
        }
        return -1;
    }
};
