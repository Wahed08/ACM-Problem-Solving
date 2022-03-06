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
    TreeNode* dfs(TreeNode* root1, TreeNode* root2){
        
        if(root1 == NULL)
            return root2;
        if(root2 == NULL)
            return root1;
        
        else{
            
            root1->val = root1->val + root2->val;    
            root1->left = dfs(root1->left, root2->left);
            root1->right = dfs(root1->right, root2->right);
            
            return root1;
        }
    }
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        if(root1 == NULL)
            return root2;
        if(root2 == NULL)
            return root1;
        
        return dfs(root1, root2);
    }
};
