class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        vector<string>str;
        
        int x = 0;
        for(long i=0; i<n; i++){
            
            if(i < n-1 and nums[i+1] - 1 == nums[i])
                continue;
            if(i == x)
                str.push_back(to_string(nums[x]));
            else{
                str.push_back(to_string(nums[x]) + "->" + to_string(nums[i]));
            }
            x = i+1;
        }
        
        return str;
    }
};
