class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size(), k = 1001;
        for(int i=0; i<n-1; i++){
            if(nums[i+1] > nums[i])
                continue;
            else{
                k = i;
                break;
            }
        }
        if(k == 1001)
            return n-1;
        return k;
    }
};

// using binary search

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int start = 0, end = nums.size() - 1;
        while(start < end){
            int mid = start + (end-start)/2;
            if(nums[mid+1] > nums[mid])
                start = mid + 1;
            else
                end = mid;
        }
        return start;
    }
};
