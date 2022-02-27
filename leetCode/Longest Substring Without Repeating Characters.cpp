class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        map<char, int>mp;
        int value = 1, sum = 0, left = 0, right = 0;
        if(s.length() == 0)
            return 0;
        
        for(int i=0; right<s.length(); i++){
            
            if(mp.find(s[i]) != mp.end()){
                
                value = max(value, sum);
                while(mp.find(s[i]) != mp.end()){
                    mp.erase(s[left++]);
                }
                mp.insert({s[i], i});
                sum = right - left + 1;
                right++;
                
            }else{
                
                mp.insert({s[i], i});
                sum = right - left + 1;
                right++;
            }
        }
        if(sum>value)
            return sum;
        return value;
    }
};
