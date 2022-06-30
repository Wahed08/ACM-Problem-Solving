class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int start = 0, end = arr.size() - 1;
        
        while(start <= end){
            int mid = start + (end-start)/2;
            if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]) return mid;
            else if(arr[mid] < arr[mid+1]) start = mid + 1;
            else end = mid - 1;
        }
        return 0;
    }
};
