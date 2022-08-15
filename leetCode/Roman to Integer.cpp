class Solution {
public:
    int romanToInt(string s) {
       
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        map<char, int>mp = {{'I',1},{'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}};
        vector<int>vec;
        int ans = 0;
        
        for(int i=0; i<s.length(); i++) vec.push_back(mp[s[i]]);
        for(int i=0; i<vec.size()-1; i++){
            if(vec[i] >= vec[i+1]) ans += vec[i];
            else ans -= vec[i];
        }
        ans += vec[vec.size()-1];
        return ans;
    }
};
