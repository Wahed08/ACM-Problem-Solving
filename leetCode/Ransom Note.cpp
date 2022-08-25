class Solution {
public:
    bool canConstruct(string ransomnote, string magazine) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        map<char, int>mp1, mp2;
        
        for(auto it : ransomnote) mp1[it]++;
        for(auto it : magazine) mp2[it]++;
        
        for(auto it : mp1) 
            if(mp2[it.first] < it.second) return false;
        
        return true;
    }
};
