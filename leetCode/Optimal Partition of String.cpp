class Solution {
public:
    int partitionString(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);

        vector<int>vec(26,-1);
        int value = 1, substr = 0; 
        for(int i=0; i<s.length(); i++){
            if(vec[s[i] - 'a'] >= substr){
                value++;
                substr = i;
            }
            vec[s[i] - 'a'] = i;
        }
        return value;
    }
};
