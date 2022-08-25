class Solution {
public:
    bool canConstruct(string ransomnote, string magazine) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int>mapp(26,0);
        
        for(auto it : ransomnote) mapp[it-'a']--;
        for(auto it : magazine) mapp[it-'a']++;
        
        for(auto it : mapp) 
            if(it < 0) return false;
        
        return true;
    }
};
