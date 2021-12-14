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
    void inorder(TreeNode* head, int& low, int& high, vector<int>&vec){
        
        if(head != NULL){
            inorder(head->left, low, high, vec);
            vec.push_back(head->val);
            inorder(head->right, low, high, vec);  
        }
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int>vec;
        long cnt = 0;
        inorder(root, low, high, vec);
        
        for(int i=0; i<vec.size(); i++){
            cout<<vec[i]<<" ";
            if(vec[i]>=low && vec[i]<=high)
                cnt += vec[i];
        }
        return cnt;
    }
};
