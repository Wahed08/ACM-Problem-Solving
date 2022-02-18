class Solution {
public:
    string removeKdigits(string num, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int ln = num.length();
        string str = "";
        stack<char>st;
        st.push(num[0]);
        
        if(ln <= k)
            return "0";
        
        for(int i=1; i<ln; i++){
            while(!st.empty() && st.top() > num[i] && k > 0){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        
        while(!st.empty() && k != 0){
            k--;
            st.pop();
        }
        
        if(st.size() == 0)
            return "0";
        
        while(!st.empty()){
            str += st.top();
            st.pop();
        }
        reverse(str.begin(), str.end());
        
        int x = 0;
        while(true){
            if(str[x] == '0')
                str.erase(str.begin());
            else
                break;
        }
        if(str.length() == 0)
            return "0";
        
        return str;
    }
};
