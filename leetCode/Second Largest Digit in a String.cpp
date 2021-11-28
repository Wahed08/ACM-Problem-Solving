class Solution {
public:
    int secondHighest(string s) {
        set<int>st;
        set<int>:: iterator it;
        int k = -1, cnt = 0;
        
        for(int i=0; i<s.length(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                st.insert(s[i]- '0');
            }
        }
        
        for(it = st.begin(); it != st.end(); it++){
            cnt++;
            if(cnt == st.size()-1){
                k = *it;
                break;
            }
        }
         if(st.size() == 1)
             return -1;
        
        return k;
       
    }
};
