//TLE

class Solution {
public:
    int check(vector<int>&nums, vector<int>&multipliers, int left, int right, int x){
        if(x == multipliers.size()) return 0;
        
        int l = nums[left]*multipliers[x] + check(nums, multipliers, left+1, right, x+1);
        int r = nums[right]*multipliers[x] + check(nums, multipliers, left, right-1, x+1);
        
        return max(l,r);
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int m = multipliers.size();
        int n = nums.size();
        
        return check(nums, multipliers, 0, n-1, 0);
    }
};

// Memory Limit Exceeded 43/50

class Solution {
public:
    int check(vector<int>&nums,vector<int>&multipliers,int left,int right,int x,vector<vector<int>>&vec){
        
        if(x == multipliers.size()) return 0;
        if(vec[left][right] != INT_MIN) return vec[left][right];
        
        int l = nums[left]*multipliers[x] + check(nums, multipliers, left+1, right, x+1, vec);
        int r = nums[right]*multipliers[x] + check(nums, multipliers, left, right-1, x+1, vec);
        
        return vec[left][right] = max(l,r);
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int m = multipliers.size();
        int n = nums.size();
        vector<vector<int>>vec(m+1, vector<int>(n+1, INT_MIN));
        
        return check(nums, multipliers, 0, n-1, 0, vec);
    }
};


// Accepted
class Solution {
public:
    int check(vector<int>&nums,vector<int>&multipliers,int left,int n,int x,vector<vector<int>>&vec){
        
        if(x == multipliers.size()) return 0;
        if(vec[left][x] != INT_MIN) return vec[left][x];
        
        int l = nums[left]*multipliers[x] + check(nums, multipliers, left+1, n, x+1, vec);
        int r = nums[(n-1)-(x-left)]*multipliers[x] + check(nums, multipliers, left, n, x+1, vec);
        
        return vec[left][x] = max(l,r);
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int m = multipliers.size();
        int n = nums.size();
        vector<vector<int>>vec(m+1, vector<int>(m+1, INT_MIN));
        
        return check(nums, multipliers, 0, n, 0, vec);
    }
};
