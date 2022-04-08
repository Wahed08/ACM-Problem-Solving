class KthLargest {
public:
    vector<int>vec;
    int kth, flag = 0;
    
    KthLargest(int k, vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        sort(nums.begin(), nums.end());
        vec = nums;
        kth = k;
    }
    
    int add(int val) {
        
        auto it = upper_bound(vec.begin(), vec.end(), val);
        vec.insert(it, val);
        
        int x = vec[vec.size()-kth];
        return x;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
