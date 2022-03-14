class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        stack<char>c1, c2;
        string s1="", s2="";
            
        for(int i=0; i<s.length(); i++){
            if(isalpha(s[i])){
                c1.push(s[i]);
            }
            if(s[i] == '#'){
                if(!c1.empty()){
                    c1.pop();
                }
            }
        }
        
         for(int i=0; i<t.length(); i++){
            if(isalpha(t[i])){
                c2.push(t[i]);
            }
            if(t[i] == '#'){
                if(!c2.empty()){
                    c2.pop();
                }
            }
        }
        while(!c1.empty()){
            s1 = c1.top() + s1, c1.pop();
        }
         while(!c2.empty()){
            s2 = c2.top() + s2, c2.pop();
        }
        
        return s1 == s2 ? true : false;
    }
};
