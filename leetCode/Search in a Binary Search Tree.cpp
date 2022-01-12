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
    TreeNode* temp;
    void traversal(TreeNode* root, int val){
        if(root == NULL)
            return;
        
        traversal(root->left, val);
        if(root->val == val){
            temp = root;
            return;
        }
        traversal(root->right, val);
    }
    
    TreeNode* searchBST(TreeNode* root, int val) {
        temp = NULL;
        traversal(root, val);
        
        return temp;
    }
};
