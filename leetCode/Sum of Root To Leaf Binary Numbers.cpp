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
    void rootToLeafPath(TreeNode* root, vector<int>&vec, int &sum){
        if(root == NULL)
            return;
        
        vec.push_back(root->val);
        
        if(root->left == NULL && root->right == NULL){
            int n = vec.size() - 1;
            int k = 0;
            for(int i=0; i<vec.size(); i++){
                k += vec[i] * (pow(2,n));
                n--;
            }
            sum += k;
        }
        rootToLeafPath(root->left, vec, sum);
        rootToLeafPath(root->right, vec, sum);
        vec.pop_back();
    }
    
    int sumRootToLeaf(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int>vec;
        int sum = 0;
        rootToLeafPath(root, vec, sum);
        
        return sum;
    }
};
