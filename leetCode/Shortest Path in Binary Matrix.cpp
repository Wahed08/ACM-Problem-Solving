class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int dimension[8][2] = {{1, 1},{1, -1},{-1, 1},{1, 0},{0, 1},{-1, -1},{0, -1},{-1, 0}};
        queue<pair<pair<int, int>, int>>q;
        int cnt = 0, n = grid.size();
        
        if(grid[0][0] == 0){
            q.push({{0,0},1});
            grid[0][0] = 1;
        }
        
        while(!q.empty()){
            pair<pair<int, int>,int> x = q.front();
            q.pop();
            
            int a = x.first.first;
            int b = x.first.second;
            int c = x.second;
            
            if(a == n-1 and b == n-1)
                return c;
            
            c++;
            for(int i=0; i<8; i++){
                int A = a + dimension[i][0];
                int B = b + dimension[i][1];
                
                if(A >= 0 and A<n and B >= 0 and B<n){
                    if(grid[A][B] == 0){
                        q.push({{A,B},c});
                        grid[A][B] = 1;
                    }
                }
            }
        }
        return -1;
    }
};
