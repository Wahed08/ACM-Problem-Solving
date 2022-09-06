class Solution {
public:
    TreeNode* traversal(TreeNode* root){
        
        if(root == NULL) return NULL;
            
        root->left = traversal(root->left);
        root->right = traversal(root->right);
        
        if(root->val == 0 and root->left == NULL and root->right == NULL) return NULL;
        return root;
        
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        return traversal(root);
    }
};
