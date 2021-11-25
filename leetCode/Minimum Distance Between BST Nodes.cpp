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
    
    void inorder(TreeNode* root, vector<int>&vec){
         if(root != NULL){
             
           inorder(root->left, vec);
           vec.push_back(root->val);
           inorder(root->right, vec);
             
       }
    }
    
    int minDiffInBST(TreeNode* root) {
        vector<int>vec;
        int cnt = INT_MAX;
        inorder(root, vec);
        
        for(int i=0; i<vec.size()-1; i++){
            cnt = min(cnt, abs(vec[i+1]-vec[i]));
        }
        
        return cnt;
    }
};
