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
    int count1, count2;
    int traversal(TreeNode* root, int currMax, int currMin){
        if(root == NULL)
            return currMax-currMin;
        else{
            
            currMax = max(currMax, root->val);
            currMin = min(currMin, root->val);
            
            int l = traversal(root->left, currMax, currMin);
            int r = traversal(root->right, currMax, currMin);
            
            return  max(l,r);
        }
    }
    
    int maxAncestorDiff(TreeNode* root) {
        
        if(root == NULL)
            return 0;
        return traversal(root, root->val, root->val);
    }
};
