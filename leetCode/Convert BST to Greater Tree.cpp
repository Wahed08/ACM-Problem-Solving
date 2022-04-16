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
    void updateTree(TreeNode* root, vector<int>&vec){
        if(root==NULL)
            return;
        
        updateTree(root->left, vec);
        int sum = 0;
        for(int i=0; i<vec.size(); i++){
            if(vec[i] >= root->val){
                sum += vec[i];
            }
        }
        root->val = sum;
        updateTree(root->right, vec);
    }
    
    void inOrder(TreeNode* root, vector<int>&vec){
        if(root == NULL)
            return;
        
        inOrder(root->left, vec);
        vec.push_back(root->val);
        inOrder(root->right, vec);
    }
    
    TreeNode* convertBST(TreeNode* root) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int>vec;
        inOrder(root, vec);
        updateTree(root, vec);
        
        return root;
    }
};
