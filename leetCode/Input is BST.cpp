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
    
    void InsertingToVector(TreeNode* node, vector<int> &vec)
        {
            if (node != NULL){ 
                
            InsertingToVector(node->left, vec);
            vec.push_back(node->val);
            InsertingToVector(node->right, vec);
                
            }
        }
    
    bool findTarget(TreeNode* root, int k) {
       
        vector<int>vec;
        InsertingToVector(root, vec);
        
        int i = 0, j = int(vec.size()) - 1;
        bool flag = false;
        while(i < j){
            if(vec[i] + vec[j] == k){
                flag = true;
                break;
            }else if(vec[i] + vec[j] < k)
                i++;
            else
                j--;
        }
        return flag;
    }
};
