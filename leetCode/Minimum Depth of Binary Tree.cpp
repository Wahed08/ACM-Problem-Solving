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
    
    int height(TreeNode* node){
        if (node == NULL)
            return 0;
        if (node->left == NULL && node->right == NULL) 
            return 1;
        if(!node->left)
            return 1+height(node->right);
         else if(!node->right)
            return 1+height(node->left);
        else {

            int lheight = height(node->left);
            int rheight = height(node->right);
            return min(lheight, rheight)+1;
        }
    }
        
    int minDepth(TreeNode* root) {
        return height(root);
    }
};
