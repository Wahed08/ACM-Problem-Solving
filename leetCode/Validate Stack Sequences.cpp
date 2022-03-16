class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        stack<int>st;
        int n = pushed.size();
        int j = 0;
        
        for(int i=0; i<n; i++){
            
            st.push(pushed[i]);
            while(!st.empty() and st.top() == popped[j]){
                st.pop();
                auto it = popped.begin();
                popped.erase(it);
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};
