class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       ios_base::sync_with_stdio(false);
       cin.tie(0), cout.tie(0);
        
       int start = 0;
       int end = nums.size() - 1;
        vector<int>vec;
        int k1 = -1, k2 = -1;
        
        while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid] == target){
                k1 = mid;
                end = mid-1;
            }
            else if(nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        vec.push_back(k1);
        
        start = 0;
        end = nums.size() - 1;
        
          while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid] == target){
                k2 = mid;
                start = mid+1;
            }
            else if(nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        vec.push_back(k2);
        
        return vec;
    }
};
