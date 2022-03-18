class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = s.length();
        vector<int>vis(26, 0), ind(26);
        string str = "";
        stack<int>st;
        
        for(int i=0; i<n; i++)
            ind[s[i] - 'a'] = i;
        
        for(int i=0; i<n; i++){
            
            int index = s[i]-'a';
            if(vis[index]) continue;
            
            while(!st.empty() and st.top() > index and i < ind[st.top()]){
                vis[st.top()] = 0;
                st.pop();
            }
            
            st.push(index);
            vis[index] = 1;
        }
        
        while(!st.empty()){
            str += st.top()+ 'a';
            st.pop();
        }
        reverse(str.begin(), str.end());
        
        return str;
    }
};
