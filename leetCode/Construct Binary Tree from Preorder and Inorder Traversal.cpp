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
    map<int, int>mp;
    int x = 0;
    
    TreeNode* constructTree(vector<int>&preorder, vector<int>&inorder, int start, int end){
            if(start>end) //best case
                return NULL;
        
        TreeNode* temp = new TreeNode(preorder[x++]);
        int middle = mp[temp->val];
        
        temp->left = constructTree(preorder, inorder, start, middle-1);
        temp->right = constructTree(preorder, inorder, middle+1, end);
        
        return temp;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size() - 1;
        for(int i=0; i<inorder.size(); i++){
            mp[inorder[i]] = i; //mapping the inorder valye
        }
        return constructTree(preorder, inorder, 0, n);
    }
};
