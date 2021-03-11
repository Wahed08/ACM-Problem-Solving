class Solution {
public:
    int longestValidParentheses(string s) {
        
        int len = s.size();
        int sum = 0;
        
        stack<int>st;
        st.push(-1);
        
        for(int i=0; i<len; i++){
            if(s[i] == '('){
                st.push(i);
            }else{
                if(!st.empty())
                    st.pop();
                if(!st.empty())
                    sum = max(sum, i-st.top());
                else
                    st.push(i);
            }
        }
        return sum;
        
    }
};
