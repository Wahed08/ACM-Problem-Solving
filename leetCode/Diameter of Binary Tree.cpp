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
    int value;
    int diameter(TreeNode* head){
        if(head == NULL)
            return 0;
        
        
        else{
            int lheight = diameter(head->left);
            int rheight = diameter(head->right);
            
            cout<<lheight<<" "<<rheight<<" ";
            
            value = max(value, lheight+rheight);
            return 1 + max(lheight, rheight);
        }
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
         value = INT_MIN;
         diameter(root); 
        
        return value;
    }
};
