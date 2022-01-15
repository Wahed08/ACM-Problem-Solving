class Solution {
public:
     int minJumps(vector<int>& arr) {
         
        unordered_map<int, vector<int>>a;
        int n=arr.size();
         
        for(int i=0;i<n;i++){
            a[arr[i]].push_back(i);
        }
         
        queue<int>q;
        int cnt=-1;
        q.push(0);
         
        vector<bool>vis(n,0);
        while(!q.empty()){
            int d = q.size();
            cnt++;
            
            while(d--){
                int i=q.front();
                vis[i]=1;
                q.pop();
                
                if(i==n-1)
                    return cnt;
                
                for(auto j: a[arr[i]])
                    if(j!=i && vis[j]==0){
                    q.push(j);
                    vis[j]=1;
                }
                if(i-1!=-1 && vis[i-1]==0){
                    vis[i-1]=1;
                    q.push(i-1);
                }
                if(i+1!=n && vis[i+1]==0){
                    vis[i+1]=1;
                    q.push(i+1);
                }
                a.erase(arr[i]);
            }
        }
        return cnt;
    }
};
