/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* dfs(TreeNode* root, TreeNode *p, TreeNode *q){
        
        if(root == NULL) return NULL;
        if(root == p || root == q) return root;
        
        TreeNode *left = dfs(root->left, p, q);
        TreeNode *right = dfs(root->right, p, q);
        
        if(left != NULL and right != NULL) return root;
        return left != NULL? left : right;
       
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        return dfs(root, p, q);
    }
};
 
