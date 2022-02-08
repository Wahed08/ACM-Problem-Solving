class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int k;
        for(auto& it : mp) {
 
            if (it.second == 1) {
                k = it.first;
            }
         }
        return k;
    }
};

// using xor operation

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int res = 0, i;
        
        for (i = 0; i < nums.size(); i++)
            res ^= nums[i];
        
         return res;
    }
};

//using binary search(logn) approach

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         int left = 0, right = nums.size() - 2;
        
        while(left <= right){
            int mid = left + (right-left) / 2;
            if(mid % 2 == 0){
                if(nums[mid] == nums[mid+1])
                    left = mid+1;
                else
                    right = mid -1;
            }else if(mid % 2 != 0){
                if(nums[mid] == nums[mid-1])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        return nums[left];
    }
};
