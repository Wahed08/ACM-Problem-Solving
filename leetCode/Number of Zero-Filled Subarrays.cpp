class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);

        long long  n = nums.size(), flag = 0, answer = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                flag++;
                answer += flag;
            }else flag = 0;
        }
        return answer;
    }
};
