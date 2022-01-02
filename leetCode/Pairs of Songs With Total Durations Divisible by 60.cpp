class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        map<int, int>mp;
        int n = time.size();
        int count = 0;
        
        for(int i=0; i<n; i++){
            int x = time[i] % 60;
            int y = (60 - x) % 60;
            
            count += mp[y];
            mp[x]++;
        }
        return count;
    }
};
