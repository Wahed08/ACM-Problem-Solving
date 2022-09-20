class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int i = 0, j = 0, ans = 0;
        for(int k=0; k<nums2.size(); k++){
            i=0, j=k;
            int cnt=0;
            while(i < nums1.size() and j < nums2.size()){
                if(nums1[i] == nums2[j]){
                    cnt++;
                    ans = max(ans, cnt);
                }else cnt = 0;
                i++;
                j++;
            }  
        }
        
        for(int k = 1; k<nums1.size(); k++){
            i=0, j=k;
            int cnt=0;
            while(j < nums1.size() and i < nums2.size()){
                if(nums1[j] == nums2[i]){
                    cnt++;
                    ans = max(ans, cnt);
                }else cnt = 0;
                j++;
                i++;
            }
        }
        
        return ans;
    }
};
