class Solution {
public:    
    void backTrack(int n, int idx, vector<char>&str, vector<vector<char>>&vec, vector<char>&v){
        if(v.size() == n){
            vec.push_back(v);
            return;
        }
        else{
            for(int i=idx; i<str.size(); i++){
                v.push_back(str[i]);
                backTrack(n, i, str, vec, v);
                v.pop_back();
            }
        }
    }
    
    int countVowelStrings(int n) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<char>str = {'a', 'e', 'i', 'o', 'u'};
        vector<char>temp;
        vector<vector<char>>vec;
        
        backTrack(n, 0, str, vec, temp);
        
        return vec.size();
    }
};











