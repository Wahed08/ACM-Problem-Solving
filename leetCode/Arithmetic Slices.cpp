class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        if(n <= 2)
            return 0;
        
        int cnt = 0, flag = 0;
        int val1 = nums[1] - nums[0];
        
        for(int i = 1; i<n-1 ; i++){
            
            int val2 = nums[i+1] - nums[i];
            if(val1 == val2)
                flag++;
            else{
                val1 = val2;
                flag = 0;
            }
            
            cnt += flag;
        }
        
        return cnt;
    }
};
