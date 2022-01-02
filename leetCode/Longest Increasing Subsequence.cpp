class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
          int n = nums.size();
          vector<int>vec(n);
        
        for(int i=0; i<n; i++){
            vec[i] = 1;
        }
        
        for(int i=1; i<n; i++){
            for(int j = 0; j<i; j++){
                if(nums[i] > nums[j] && vec[i] < vec[j] + 1){
                    vec[i] = vec[j] + 1;
                }
            }
            // cout<<vec[i]<<" ";
        }
        sort(vec.begin(), vec.end());
        return vec[n-1];
    }
};
