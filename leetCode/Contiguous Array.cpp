class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        vector<vector<int>>vec;
       
        // for finding the all contiguous subarray
        for(int i=0; i<n; i++){
             vector<int>v;
            for(int j = i; j<n; j++){
               for(int k = i; k<=j; k++){
                   v.push_back(nums[k]);
               }
                vec.push_back(v);
                v.clear();
            }
        }
        
        int value = 0;
        for(int i=0; i<vec.size(); i++){
            
            vector<int>v = vec[i];
            int cnt1 = 0, cnt2 = 0;
            int x = v.size();
            
            for(int j=0; j<v.size(); j++){
                if(v[j] == 0)
                    cnt1++;
                if(v[j] == 1)
                    cnt2++;
            }
            if(cnt1 == cnt2)
                value = max(value, x);
        }
        return value;
    }
};
