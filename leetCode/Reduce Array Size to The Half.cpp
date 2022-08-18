class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = arr.size(), k = 0, x=0;
        map<int, int>mapp;
        vector<int>vec;
        
        for(int i=0; i<n; i++) mapp[arr[i]]++;
        for(auto it : mapp) vec.push_back(it.second);
        sort(vec.begin(), vec.end(), greater<int>());
        
        for(int i=0; i<vec.size(); i++){
            k += vec[i];
            x++;
            if(k >= n/2) break;
        }
        return x;
    }
};
