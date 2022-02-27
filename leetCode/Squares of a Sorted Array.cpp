class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int low = 0, high = nums.size()-1;
        int index = high;
        vector<int>vec(index+1);
        
        while(low <= high){
            if(abs(nums[low]) < abs(nums[high])){
                vec[index--] = nums[high--];
            }else{
                vec[index--] = nums[low++];
            }
        }
        for(int i=0; i<nums.size(); i++){
            vec[i] *= vec[i];
        }
        
        return vec;
    }
};
