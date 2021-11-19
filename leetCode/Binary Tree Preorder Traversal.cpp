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
    
    TreeNode* newNode(int val) {
    
        TreeNode *left, *right;
        TreeNode* node = new TreeNode();
        
        node->val = val;
        node->left = NULL;
        node->right = NULL;
        
        return node;
    }
    
    void printPreorder(TreeNode* node, vector<int> &vec)
        {
            if (node != NULL)
            {
            
            vec.push_back(node->val);
            
           
            printPreorder(node->left, vec);
            printPreorder(node->right, vec);
                
            }
        
        }
    
    
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        // TreeNode *result, *temp;
        // int value= *(int*)root;
        // result = newNode(value);
        
        vector<int>vec;
        // cout<<root->right->val;
        printPreorder(root, vec);
        return vec;
    }
};
