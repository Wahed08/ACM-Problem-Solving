bool sorting(pair<char, int>& p1, pair<char, int>& p2){
    return p1.second > p2.second;
}

class Solution {
public:
    string frequencySort(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = s.length();
        string str = "";
        map<char, int>mapp;
        vector<pair<char, int> >vec;
        
        for(int i=0; i<n; i++) mapp[s[i]]++;
        for(auto it : mapp) vec.push_back(it);
        sort(vec.begin(), vec.end(), sorting);
        
        for(auto it : vec){
            for(int i=0; i<it.second; i++){
                str += it.first;
            }
        }
        
        return str;
    }
};
