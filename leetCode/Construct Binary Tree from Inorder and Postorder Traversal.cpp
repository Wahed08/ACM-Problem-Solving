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
    
    TreeNode* constructTree(vector<int>&postorder, vector<int>&inorder, int start, int end, int &x){
            if(start>end) //best case
                return NULL;
        
        TreeNode* temp = new TreeNode(postorder[x--]);
        int middle = mp[temp->val];
        
        temp->right = constructTree(postorder, inorder, middle+1, end, x);
        temp->left = constructTree(postorder, inorder, start, middle-1, x);
        
        return temp;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        int n = postorder.size() - 1;
        int x = postorder.size() - 1;
        for(int i=0; i<inorder.size(); i++){
            mp[inorder[i]] = i; //mapping the inorder value
        }
        return constructTree(postorder, inorder, 0, n, x);
    }
};
