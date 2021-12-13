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
    bool flag;
    int checkBalanced(TreeNode* head){
        
        int value;
        if(head == NULL)
            return 0;
        
        int lheight = checkBalanced(head->left);
        int rheight = checkBalanced(head->right);

        value = abs(lheight-rheight);
        if(value > 1)
            flag = false;
        return 1 + max(lheight, rheight);
        
    }
    
    bool isBalanced(TreeNode* root) {
        
        if(root == NULL)
            return true;
        flag = true;
        checkBalanced(root);
        return flag;
    }
};
