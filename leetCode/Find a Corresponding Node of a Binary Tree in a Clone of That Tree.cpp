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
    map<TreeNode*, TreeNode*>mapp;
    
    void traversal(TreeNode* original, TreeNode* cloned){
        
        if(original == NULL and cloned == NULL)
            return;
        
        traversal(original->left,cloned->left);
        mapp[original] = cloned;  
        traversal(original->right,cloned->right);
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        TreeNode* ans;
        
        traversal(original, cloned);
        for(auto it: mapp){
            if(it.first == target){
                ans = it.second;
                break;
            }
        }
        
        return ans;
    }
};
