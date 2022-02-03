class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums1.size();
        int cnt = 0;
        vector<int>first;
        vector<int>second;
        unordered_map<int, int>mp;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                first.push_back(nums1[i]+nums2[j]);
            }
        }
        
         for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                second.push_back(nums3[i]+nums4[j]);
            }
        }
       
        for(int i=0; i<first.size(); i++){
            mp[first[i]]++;
        }
        
        for(int i=0; i<second.size(); i++){
           int left = 0 - second[i];
           if(mp.find(left) != mp.end())
               cnt += mp[left];
        }
        
        return cnt;
    }
};
