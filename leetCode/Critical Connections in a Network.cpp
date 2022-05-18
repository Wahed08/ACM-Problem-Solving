class Solution {
public:
    int time = 0;
    
    void dfs(int i, vector<int>&disc, vector<int>&low, vector<int>&parent, vector<vector<int>>&critical, vector<vector<int>>&vec){
        
        disc[i] = low[i] = time;
        time += 1;
        
        for(auto it: vec[i]){
            if(disc[it] == -1){
                parent[it] = i;
                dfs(it, disc, low, parent, critical, vec);
                low[i] = min(low[i], low[it]);
                
                if(low[it] > disc[i]){
                    vector<int>v = {i, it};
                    critical.push_back(v);
                }
            }else if(it != parent[i])
                low[i] = min(low[i], disc[it]);
        }
    }
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        //Tarjans Algorithm
        vector<vector<int>>vec(n);
        vector<int>disc(n,-1), low(n,-1), parent(n,-1);
        vector<vector<int>>critical;
        
        for(auto it: connections){
            vec[it[0]].push_back(it[1]);
            vec[it[1]].push_back(it[0]);
        }
        
        for(int i=0; i<n; i++){
            if(disc[i] == -1){
                dfs(i, disc, low, parent, critical, vec);
            }
        }
        return critical;
        
    }
};
