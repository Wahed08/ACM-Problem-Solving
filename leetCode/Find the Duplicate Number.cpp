class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        int cnt = 0;
        
        //All the integers in nums appear only once except for precisely one integer which appears two
        for(int i=0; i<n; i++){
            cnt = nums[i] ^ cnt ^ i;
        }
        
        return cnt;
    }
};


////All the integers in nums appear only once except for precisely one integer which appears two or more times
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        //interesting -> this is called tortoise and hare algorithim
        while(nums[0] != nums[nums[0]])
            swap(nums[0], nums[nums[0]]);
        
        return nums[0];
    }
};

// full code of tortoise and hare algo ->
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int slow = nums[0], fast = nums[0];
        
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        
        fast = nums[0];
        while(slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return slow;
    }
};
