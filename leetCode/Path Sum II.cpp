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
    void rootToLeaf(TreeNode* root, int target, vector<vector<int>>&vec, vector<int>&v){
        if(root == NULL)
            return;
        v.push_back(root->val);
        
        if(root->left == NULL and root->right == NULL){
            int sum = 0;
            for(int i=0; i<v.size(); i++){
                sum += v[i];
            }
            if(sum == target){
                vec.push_back(v);
            }
        }
        
        rootToLeaf(root->left, target, vec, v);
        rootToLeaf(root->right, target, vec, v);
        
        v.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<vector<int>>vec;
        vector<int>v;
        rootToLeaf(root, targetSum, vec, v);
        
        return vec;
    }
};
