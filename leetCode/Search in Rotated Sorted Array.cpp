class Solution {
public:
    
    int binarySearch(vector<int>&arr, int start, int end, int target){
        while(start <= end){
            int mid = start + floor((end-start))/2;
            
            if(arr[mid] == target)
                return mid;
            else if(arr[mid] < target)
                start = mid+1;
            else
                end = mid-1;
        }
        return -1;
    }
    
    int findPivot(vector<int>&vec, int start, int end){
        
        while(start <= end){
            int mid = start + floor((end-start))/2;
            if(mid == 0 || vec[mid] < vec[mid-1]){
                return mid;
            }
            else if(vec[mid] > vec[0])
                start = mid + 1;
            else
                end = mid - 1;
        }
        return 0;
    }
    
    int search(vector<int>& nums, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        int pivot = findPivot(nums, 0, n-1);
        
        if(pivot == 0 or nums[0] > target)
            return binarySearch(nums, pivot, n-1, target);
        
        return binarySearch(nums, 0, pivot-1, target);
    }
};




