class Solution {
    static bool compare(string &a, string &b){
        return a.length()<b.length();
    }
public:
    
    bool stringCheck(string &a, string &b){
        int cnt=0;
        if(a.length() == b.length()+1){
            int i=0, j=0;
            while(i<a.length() and j<b.length()){
                if(a[i] == b[j]){
                    i++, j++, cnt++;
                }else{
                    i++;
                }
            }
        }
        return cnt==b.length()? true: false;
    }
    
    int longestStrChain(vector<string>& words) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        sort(words.begin(), words.end(), compare);
        int n = words.size(), cnt=0;
        vector<int>vec(n, 1);
        
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(stringCheck(words[i], words[j]) and vec[i] < vec[j] + 1){
                    vec[i] = vec[j] + 1;
                }
            }
        }
        
        for(auto it: vec) cnt = max(cnt, it);
        
        return cnt;
    }
};
