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
    
    bool isMirror(TreeNode* rootX, TreeNode* rootY){
        if(rootX == NULL && rootY == NULL)
            return true;
        
        return (rootX != NULL && rootY != NULL && (rootX->val == rootY->val)) &&
                 isMirror(rootX->left, rootY->right) 
                && isMirror(rootX->right, rootY->left); 
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        
        return isMirror(root->left, root->right);
    }
};
