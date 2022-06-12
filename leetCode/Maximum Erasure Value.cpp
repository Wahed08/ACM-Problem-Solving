// GOT TLE

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size(), left = 0, right = 0, ans=0, sum=0, value=1;
        map<int, int>mapp;
        vector<pair<int, int>>vec;
        
        for(int i=0; i<n; i++){
            if(mapp.find(nums[i]) != mapp.end()){
                
                auto it = mapp.find(nums[i]);
                left = max(it->second + 1, left);
                mapp.at(nums[i]) = i;
                sum = right - left + 1;
                right++;

            }else{
                mapp.insert({nums[i], i});
                sum = right - left + 1;
                right++;
            }
            ans = accumulate(nums.begin()+left, nums.begin()+right, ans);
            value = max(ans, value);
            ans = 0;
        }
        
        return value;
    }
};
