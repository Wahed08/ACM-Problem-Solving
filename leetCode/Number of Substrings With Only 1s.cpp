class Solution {
public:
    int numSub(string s) {
        vector<long>vec;
        
        int ln = s.length();
        unsigned int M = 1000000007;
        long long val = 0;
        
        int cnt = 0;
        for(int i=0; i<ln; i++){
            if(s[i] == '1')
                cnt++;
        }
        
        int count = 1;
        for(int i=0; i<ln; i++){
            if(s[i] == s[i+1] && s[i] == '1'){
                count++;
            }else{
                if(count>1)
                    vec.push_back(count);
                    count = 1;
            }
        }
        for(int i=0; i<vec.size(); i++){
            cout<<vec[i]<<" ";
        }
        for(int i=0; i<vec.size(); i++){
            val += ((vec[i] * (vec[i]-1)) / 2) % M;
        }
        
        return cnt+val;
    }
};
