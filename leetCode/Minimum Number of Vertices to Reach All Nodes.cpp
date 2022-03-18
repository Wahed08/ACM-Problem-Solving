class Solution {
public:
    
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cin.tie(0);
        
        vector<int>indegree(n),v;
        for(auto it : edges){
            indegree[it[1]]++;
        }
        
        for(int i=0; i<n; i++){
            if(indegree[i] == 0){
                v.push_back(i);
            }
        }
        
        return v;
    }
};
