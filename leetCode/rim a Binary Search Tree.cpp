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
    TreeNode* traversal(TreeNode* root, int low, int high){
        if(root == NULL)
            return root;
        if(root->val > high)
            return traversal(root->left, low, high);
        if(root->val < low)
            return traversal(root->right, low, high);
        
        root->left = traversal(root->left, low, high);
        root->right = traversal(root->right, low, high);
        
        return root;
    }
    
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        return traversal(root, low, high);
    }
};
