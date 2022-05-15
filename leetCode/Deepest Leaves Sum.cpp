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
    int sum = 0;
    void sumTraversal(TreeNode* root, int height, int x){
        if(root == NULL)
            return;
        if(x+1 == height){
            sum += root->val;
        }
        
        x++;
        sumTraversal(root->left, height, x);
        sumTraversal(root->right, height, x);
        x--;
    }
    
    int getHeight(TreeNode *root){
        if(root == NULL)
            return 0;
        
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        return max(left, right) + 1; 
    }
    
    int deepestLeavesSum(TreeNode* root) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int height, x=0;
        height = getHeight(root);
        sumTraversal(root, height, x);
        
        return sum;
    }
};
