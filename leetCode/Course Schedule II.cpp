class Solution {
public:
    void topDfs(int node, vector<int>&vis, vector<vector<int>>& graph, stack<int>&st)
    {
        vis[node] = 1;
        for(auto j: graph[node]){
            if(!vis[j])
                topDfs(j, vis, graph, st);
        }
        st.push(node);
    }
    
    bool detectCycle(int node, vector<int>&vis, vector<int>&dfsVis, vector<vector<int>>& graph){
        
        vis[node] = 1;
        dfsVis[node] = 1;
        for(auto j: graph[node]){
            if(!vis[j]){
                if(detectCycle(j, vis, dfsVis, graph))
                    return true;
            }
            else if(dfsVis[j])
                return true;
        }
        dfsVis[node] = 0;
        return false;
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<vector<int>>vec(numCourses);
        vector<int>output;
        stack<int>st;
        
        for(auto it: prerequisites){
            vec[it[1]].push_back(it[0]);
        }
        vector<int>vis(numCourses, 0);
        vector<int>dfsVis(numCourses, 0);
        
        bool flag = false;
        for(int i=0; i<numCourses; i++){
            if(!vis[i]){
                if(detectCycle(i, vis, dfsVis, vec)){
                    flag = true;
                    break;
                }
            }
        }   
        vector<int>visited(numCourses, 0);
        if(!flag){
           for(int i=0; i<numCourses; i++){
            if(!visited[i]){
                topDfs(i, visited, vec, st);
                }
            }   
        }
        if(!flag){
            while(!st.empty()){
                output.push_back(st.top());
                st.pop();
            }
        }
        return output;
    }
};
