class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        map<char, int>mp;
        int sum = 1;
        string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int n = columnTitle.length();
        
        for(int i = 1; i<=26; i++){
            mp[str[i-1]] = i;
        }
        if(n == 1)
            return mp[columnTitle[0]];
        
        for(int i=0; i<n; i++){
            if(i==0)
                sum = 26 * mp[columnTitle[i]];
            else if(i == 1)
                sum += mp[columnTitle[i]];
            else{
                sum = (sum * 26) + mp[columnTitle[i]];
            }
        }
        
        return sum;
    }
};
