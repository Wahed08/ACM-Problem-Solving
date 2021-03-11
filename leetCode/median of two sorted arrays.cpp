class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        
        double val; 
        long n = nums1.size()/2;
        
        if(nums1.size() % 2 == 0){
              val = 1.0*(nums1[n-1] + nums1[n])/2;
        }else{
            val = nums1[n];
        }
        return val;
    }
};
