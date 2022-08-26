class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<string>vec;
        string s = to_string(n);
        sort(s.begin(), s.end());
        
        do{
            vec.push_back(s);
        }while(next_permutation(s.begin(), s.end()));
        
        for(int i=0; i<vec.size(); i++){
            
            if(vec[i][0] == '0') continue;
            int value = stoi(vec[i]);
            int32_t k = log(value) / log(2);
            if(pow(2, k) == value) return true;
            else if(k == 0) return true;
        }
        return false;
    }
};


//
class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<string>vec;
        string s = to_string(n);
        sort(s.begin(), s.end());
        
        do{
            vec.push_back(s);
        }while(next_permutation(s.begin(), s.end()));
        
        for(int i=0; i<vec.size(); i++){
            
            if(vec[i][0] == '0') continue;
            int value = stoi(vec[i]);
            if(log2(value) == (int)log2(value)) return true;
        }
        return false;
    }
};

// fastest

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        string s = to_string(n);
        sort(s.begin(), s.end());
        
        for(int i=0;i<=30;i++){
            
            int x = 1 << i;
            string str = to_string(x);
            sort(str.begin(),str.end());
            if(str == s) return true;
        }
        return false;
    }
};
