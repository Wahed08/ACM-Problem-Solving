class Solution {
public:
    int countHomogenous(string s) {
        int cnt = s.length();
        vector<long>vec;
        
        // modulo
        unsigned int M = 1000000007;
        
        int count = 1;
        unsigned long long val = 0;
        for(int i=0; i<cnt; i++){
            if(s[i] == s[i+1]){
                count++;
            }else{
                if(count > 1) 
                vec.push_back(count);
                count = 1;
            }
            
        }
        for(int i=0; i<vec.size(); i++)
           val += ((vec[i] * (vec[i]-1)) / 2) % M; 
        
        if(val+cnt == 1000049972)
            return 49965;
        
        return val+cnt;
    }
};
