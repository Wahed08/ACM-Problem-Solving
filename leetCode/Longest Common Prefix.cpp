bool compare(string a, string b){
    return a.length() < b.length();
}

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = strs.size();
        string prefix = "";
        int count = 0;
        sort(strs.begin(), strs.end(), compare);
        int firstLength = strs[0].length();
        
        for(int i=0; i<firstLength; i++){
            
            string ch = prefix + strs[0][i];
            count = 0;
            
            for(int j=0; j<n; j++){
                
                int it = strs[j].find(ch);
                if(it == 0){
                    count++;
                }
            }
            if(count == n)
                prefix += strs[0][i]; 
            else
                break;
        }
        
        return prefix.length() > 0 ? prefix : "";
    }
};
