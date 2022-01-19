class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        int cnt = 0;
        
        //All the integers in nums appear only once except for precisely one integer which appears two
        for(int i=0; i<n; i++){
            cnt = nums[i] ^ cnt ^ i;
        }
        
        return cnt;
    }
};
