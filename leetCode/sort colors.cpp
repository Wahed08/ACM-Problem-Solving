class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int val = 0;
        int arr[n+1];
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n; i++){
           cout<<nums[i]<<" ";
        }
        cout<<endl;
    }
};
