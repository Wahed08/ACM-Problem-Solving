class Solution {
public:
    int divisorSubstrings(int num, int k) {
        
        string str = to_string(num);
        vector<int>vec;
        int cnt = 0;
        
        for(int i=0; i<str.length(); i++){
            string s;
            for(int j = i; j < str.length(); j++){
                s += str[j];
                if(s.length() == k){
                    vec.push_back(stoi(s));
                }
            }
        }
        
        for(int i=0; i<vec.size(); i++){
            if(vec[i] != 0 and num % vec[i] == 0){
                cnt++;
            }
        }
        return cnt;
    }
};
