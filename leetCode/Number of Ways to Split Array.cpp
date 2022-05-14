class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<long long>vec;
        int n = nums.size(), cnt = 0;
        long long sum = 0;
        
        for(int i=n-1; i>0; i--){
            sum += nums[i];
            vec.push_back(sum);
        }
        vec.push_back(nums[0]);
        long long val = 0;
        
        reverse(vec.begin(), vec.end());
        for(int i=0; i<n-1; i++){
            val += nums[i];    
            if(val >= vec[i+1]){
                cnt++;
            }
        }
        
        return cnt;
    }
};
