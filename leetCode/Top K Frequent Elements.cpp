bool compare(pair<int, int>&a, pair<int, int>&b){
    return a.second > b.second;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        map<int, int>mapp;
        vector<pair<int, int>>vec;
        vector<int>ans;
        
        for(int i=0; i<n; i++) mapp[nums[i]]++;
        for(auto it : mapp) vec.push_back(it);
        
        sort(vec.begin(), vec.end(), compare);
        
        for(auto it : vec){
            k--;
            ans.push_back(it.first);
            if(k==0)
                break;
        }
        
        return ans;
    }
};
