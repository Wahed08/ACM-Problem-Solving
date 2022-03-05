class Solution {
public:
    int longestPalindrome(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        map<char, int>mapp;
        for(char c: s) mapp[c]++;
        
        int count = 0, flag = 0;
        for(auto it: mapp){
            if(it.second == 1)
                flag = 1;
            
            else if(it.second != 1){
                if(it.second % 2 == 0)
                    count += it.second;
                else if(it.second % 2 == 1){
                    if(count % 2 == 0)
                        count += it.second;
                    else
                        count += it.second - 1;
                }
            }
        }
        if(count % 2 == 0)
            return count + flag;
        
        return count;
    }
};
