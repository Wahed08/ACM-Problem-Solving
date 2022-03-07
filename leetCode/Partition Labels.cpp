class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int> ans;
        map<int,int> pos;
        int sum = 0, maxx = 0;
        
        for(int i = s.length() -1; i >= 0; i--){
            if(pos[s[i]-'a'] == 0)
                pos[s[i]-'a'] = i+1;
        }
        for(int i = 0, prev = 0; i < s.length(); i++){
            maxx = max(maxx, pos[s[i]-'a']);
            if( i+1 == maxx ){
                ans.push_back(maxx - sum), sum += ans[prev++];
            }
        }
        return ans;
    }
};
