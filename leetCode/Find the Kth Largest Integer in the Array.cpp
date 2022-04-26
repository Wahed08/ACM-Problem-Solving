class Solution {    
public:
    static bool compare(string a, string b){
        if(a.length() == b.length())
            return a < b;
        else
           return a.length() < b.length();
    }
    
    string kthLargestNumber(vector<string>& nums, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        sort(nums.begin(), nums.end(), compare);
        
        return nums[n-k];
    }
};
