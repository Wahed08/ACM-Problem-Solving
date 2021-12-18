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
    
    bool traversal(TreeNode* root, int targetSum){
        
        bool ans = 0;
        if(root != NULL){
             
        int value = targetSum - root->val;
        
        if(value == 0 && root->left == NULL && root->right == NULL)
            return 1;
        
            if(root->left)
             ans = ans || traversal(root->left, value);
            if(root->right)
             ans = ans || traversal(root->right, value);
     
        }
      
        return ans;
}
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        return traversal(root, targetSum);
    }
};
