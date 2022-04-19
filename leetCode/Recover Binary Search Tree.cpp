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
    int i=0;
    void makeTree(TreeNode* root, vector<int>&vec){
        if(root == NULL)
            return;
        makeTree(root->left, vec);
        root->val = vec[i++];
        makeTree(root->right, vec);
    }
    
    void inOrder(TreeNode* root, vector<int>&vec){
        if(root == NULL)
            return;
        inOrder(root->left, vec);
        vec.push_back(root->val);
        inOrder(root->right, vec);
    }
    
    void recoverTree(TreeNode* root) {
       
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int>vec;
        
        inOrder(root, vec);
        sort(vec.begin(), vec.end());
        makeTree(root, vec);
    }
};
