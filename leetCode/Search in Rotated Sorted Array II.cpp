class Solution {
public:
     bool binarySearch(vector<int>&arr, int start, int end, int target){
        while(start <= end){
            int mid = start + (end-start)/2;
            
            if(arr[mid] == target)
                return true;
            else if(arr[mid] < target)
                start = mid+1;
            else
                end = mid-1;
        }
        return false;
    }
    
    int findPivot(vector<int>&vec, int start, int end){
        
        while(start <= end){
            
            while(start < end and vec[start] == vec[start+1])
                start++;
            while(start < end and vec[end] == vec[end-1])
                end--;
            
            int mid = start +(end-start)/2;
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
    
    bool search(vector<int>& nums, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size(), j=0;
        int pivot = findPivot(nums, 0, n-1);
        
        if(n == 1){
            if(target == nums[0])
                return true;
            return false;
        }
        if(nums[0] > nums[1]) 
            pivot = 1;
        
        cout<<pivot<<endl;
        
        if(pivot == 0 || nums[0] > target)
            return binarySearch(nums, pivot, n-1, target);
        
        return binarySearch(nums, 0, pivot-1, target);
    }
};
