class Solution {
public:
    
    int priority(char c){
        if(c == '/' || c == '*')
            return 2;
        else if(c == '+' || c == '-')
            return 1;
       
        return -1;
    }
    
    int calculate(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int32_t x, y, flag = 0;
        string str = "";
        
        stack<char>st;
        stack<int>stack;
        queue<char>q;
        
        for(int i=0; i<s.length(); i++){
            if(isdigit(s[i])){
                str += s[i];
            }else {
                if(s[i] != ' '){
                     if(st.empty()){
                    st.push(s[i]);
                }
                else{ 
                    if(priority(s[i]) <= priority(st.top())){              
                        str += st.top();
                        st.pop();
                  }
                    st.push(s[i]);
                }
              }
            }
        }
        
        while(!st.empty()){
            str += st.top();
            st.pop();     
        }
     

        for(int i = 0; i<str.length(); i++){
            if(isdigit(str[i])){
                int cur = 0;
                while (i < str.size() && isdigit(str[i]))
                    {
                    cur = cur * 10 + (str[i] - '0');
                    i++;
                }
                stack.push(cur);
                
            }
            else{
                 x = stack.top();
                 stack.pop();
                 y = stack.top();
                 stack.pop();
                 int ans = 0;

            switch(str[i]){
                case '+':
                    ans = x+y; 
                    break;
                case '-':
                   ans = y-x; 
                    break;
                case '*':
                    ans = x*y; 
                    break;
                case '/':
                    ans = y/x; 
                    break;
                    
                }
                  stack.push(ans);
            } 
            
        }
        
       return stack.top();  
    }
};
