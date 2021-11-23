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
    
    TreeNode* smallest(TreeNode* root, int& k){
        if(root == NULL)
            return root;
        
        TreeNode* left = smallest(root->left, k);
        
        if(left != NULL)
            return left;
        
         k--;
        if(k == 0) return root;
        
        return smallest(root->right, k);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* temp;
        temp = smallest(root, k);
        
        return temp->val;
    }
};
