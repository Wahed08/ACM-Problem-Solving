class Solution {
public:
        
    vector<int> searchRange(vector<int>& nums, int target) {
        
         vector<int>vec1;
         
          int n = nums.size();
          int low1 = 0, high1 = n - 1, res1 = -1;
    while (low1 <= high1) {
        int mid = (low1 + high1) / 2;
        if (nums[mid] > target)
            high1 = mid - 1;
        else if (nums[mid] < target)
            low1 = mid + 1;
 
        else {
            res1 = mid;
            low1 = mid + 1;
        }
    }
    
         
          vector<int>vec2;
          int low2 = 0, high2 = n - 1, res2 = -1;
    while (low2 <= high2) {
       
        int mid = (low2 + high2) / 2;
        if (nums[mid] > target)
            high2 = mid - 1;
        else if (nums[mid] < target)
            low2 = mid + 1;
 
        else {
            res2 = mid;
            high2 = mid - 1;
        }
    }
         vec1.push_back(res2);
         vec1.push_back(res1);
         return vec1;    
    }
};
