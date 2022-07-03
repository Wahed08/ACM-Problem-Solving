class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n=nums.size(), flag = 0;
        
        vector<int>vec,vec1;
        for(int i=0; i<n-1; i++){
            if(nums[i+1] > nums[i] and flag==0){
                flag = 1;
                vec.push_back(nums[i]);
            }
            else if(nums[i+1] < nums[i] and flag==1){
                flag = 0;
                vec.push_back(nums[i]);
            }
        }
        int x1 = vec.size()+1;

        flag=0;
        for(int i=0; i<n-1; i++){
            if(nums[i+1] < nums[i] and flag==0){
                flag = 1;
                vec1.push_back(nums[i]);
            }
            else if(nums[i+1] > nums[i] and flag==1){
                flag = 0;
                vec1.push_back(nums[i]);
            }
        }
        int x2 = vec1.size()+1;
          
        return max(x1, x2);
    }
};
