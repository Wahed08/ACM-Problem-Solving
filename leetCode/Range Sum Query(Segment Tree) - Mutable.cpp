class NumArray {
public:
    int n;
    int tree[120000];
        
    void buildSegmentTree(int node, int start, int end, vector<int>&nums){
        if(start == end){
            tree[node] = nums[start];
            return;
        }
        int left = 2*node + 1;
        int right = 2*node + 2;
        int mid = (start+end)/2;
        buildSegmentTree(left, start, mid, nums);
        buildSegmentTree(right, mid+1, end, nums);
        tree[node] = tree[left] + tree[right];
    }
    
    int querySum(int node, int start, int end, int left, int right){
        if(start > right || end < left)
            return 0;
        if(start >= left && right >= end)
            return tree[node];
        
        int leftTree = 2*node + 1;
        int rightTree = 2*node + 2;
        if(leftTree > INT_MAX / 10 || rightTree > INT_MAX/10) return 0;
        if(leftTree < INT_MIN / 10 || rightTree < INT_MIN/10) return 0;
        int mid = (start+end)/2;
        int x = querySum(leftTree, start, mid, left, right);
        int y = querySum(rightTree, mid+1, end, left, right);
        
        return x + y;
    }
    
    void updateTree(int node, int start, int end, int index, int value){
        
        if(start > index || end < index)
            return;
        if(index <= start && index >= end){
            tree[node] = value;
            return;
        }
        
        int left = 2*node + 1;
        int right = 2*node + 2;
        int mid = (start+end)/2;
        updateTree(left, start, mid, index, value);
        updateTree(right, mid+1, end, index, value);
        tree[node] = tree[left] + tree[right];
        
    }
    
    
    NumArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        n = nums.size();
        buildSegmentTree(0, 0, n-1, nums);
    }
    
    void update(int index, int val) {
        updateTree(0, 0, n-1, index, val);
    }
    
    int sumRange(int left, int right) {
        return querySum(0, 0, n-1, left, right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
