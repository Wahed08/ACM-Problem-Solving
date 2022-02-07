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
    int x = 0;
    map<int, int>mp;
    
    TreeNode *constructTree(vector<int>& preorder, vector<int>& postorder, int start, int end){
        
        if(start > end)
            return NULL;
        if(start == end)
            return new TreeNode(preorder[x++]);
        
        int n = mp[preorder[x+1]];
         
         TreeNode *temp = new TreeNode(preorder[x++]);
        
         temp->left = constructTree(preorder, postorder, start, n);
         temp->right = constructTree(preorder, postorder, n + 1, end-1);
 
        return temp;
    }
    
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        
        if(postorder.size() == 0)
            return NULL;
        
        int n = preorder.size() - 1;
         for(int i=0; i<postorder.size(); i++){
            mp[postorder[i]] = i; //mapping the inorder value
        }
        return constructTree(preorder, postorder, 0, n);
    }
};
