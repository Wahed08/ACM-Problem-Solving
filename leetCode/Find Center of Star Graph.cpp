class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        vector<vector<int>>vec(edges.size() + 2);
        for(int i=0; i<edges.size(); i++){
            vec[edges[i][0]].push_back(edges[i][1]);
            vec[edges[i][1]].push_back(edges[i][0]);
        }
        
        int cnt;
        for(int i = 1; i<=vec.size(); i++){
            if(vec[i].size() == edges.size())
                return i;
        }
        return -1;
    }
};
