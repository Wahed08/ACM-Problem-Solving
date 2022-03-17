/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode *TreeCreation(vector<int>&nums, int start, int end){
        
        if(start>end){
           return NULL; 
        }
        int mid = start + (end-start)/2;
        TreeNode *root = new TreeNode(nums[mid]);

        root->left = TreeCreation(nums, start, mid-1);
        root->right = TreeCreation(nums, mid+1, end);

        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        if(n > 0)
            return TreeCreation(nums, 0, n-1);
        
        return NULL;
    }
};
