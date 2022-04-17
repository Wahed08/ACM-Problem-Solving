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
    TreeNode* makeTree(vector<int>&vec){
        TreeNode *head = NULL;
        
        for(int i=vec.size()-1; i>=0; i--){
            TreeNode* temp = new TreeNode(vec[i]);
            temp->right = head;
            head = temp;
        }
        return head;
    }
    
    void inOrder(TreeNode *root, vector<int>&vec){
        if(root == NULL)
            return;
        inOrder(root->left, vec);
        vec.push_back(root->val);
        inOrder(root->right, vec);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
      
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int>vec;
        inOrder(root, vec);
        return makeTree(vec);
    }
};
