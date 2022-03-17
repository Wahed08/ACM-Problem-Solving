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
     bool checking(TreeNode* root, TreeNode* subRoot){
        
        if(root == NULL and subRoot == NULL)
            return true;
        
        return ((root and subRoot) and (root->val == subRoot->val)) 
            and checking(root->left, subRoot->left) and checking(root->right, subRoot->right);
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        if(root == NULL) return false;
        if(subRoot == NULL) return true;
        
        if(checking(root, subRoot))
            return true;
        
        return (isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot));
    }
};

