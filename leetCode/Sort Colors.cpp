class Solution {
public:
    void sortColors(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        int flag1 = 0, flag2 = 0, flag3 = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                flag1++;
            }else if(nums[i] == 1)
                flag2++;
            else
                flag3++;
        }
        int j = 0;
        for(int i=0; i<n; i++){
            if(flag1>0){
                nums[j++] = 0;
                flag1--;
            }
            else if(flag2>0){
                nums[j++] = 1;
                flag2--;
            }else{
                nums[j++] = 2;
                flag3--;
            }
        }
       
    }
};
