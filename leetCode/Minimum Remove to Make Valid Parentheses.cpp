class Solution {
public:
    string minRemoveToMakeValid(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        char c;
        
        stack<pair<char,int> >st;
        
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                st.push({s[i], i});
                continue;
            }
            else if(s[i] == ')'){
                 // c = st.top().first;
                if(!st.empty() && st.top().first == '(')
                    st.pop();
                else
                    st.push({s[i], i});
            }
        }
        
        while(!st.empty()){
            int x = st.top().second;
            s.erase(s.begin()+x);
            st.pop();
        }
        return s;
    }
};
