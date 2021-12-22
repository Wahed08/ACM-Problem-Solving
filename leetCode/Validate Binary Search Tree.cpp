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
    void InorderTraverse(TreeNode* root, vector<int>&vec){
        if(root == NULL)
            return;
        
        InorderTraverse(root->left, vec);
        vec.push_back(root->val);
        InorderTraverse(root->right, vec);
    }
    
    bool isValidBST(TreeNode* root) {
        flag = false;
        vector<int>vec;
        InorderTraverse(root, vec);
        int k = 0;
        for(int i=0; i<vec.size()-1; i++){
            if(vec[i] == vec[i+1]){
                k = 0;
                break;
            }
            else
                k = 1;
        }
        if(is_sorted(vec.begin(), vec.end()))
            flag = true;
        if(vec.size() == 1)
            return true;
        if(k == 0)
            return false;
      
        return flag;
    }
};
