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
    
    int widthOfBinaryTree(TreeNode* root) {
        int count = 1;
        int ln = 0;
        
        if(root == NULL)
           return 0;
        
           queue<pair<TreeNode*, int>>qu;
           qu.push({root, 0});
                 
         while(!qu.empty()){
           int length = qu.size();
           count = max(qu.back().second - qu.front().second+1, count);
             
           while(length--){
               TreeNode *temp = qu.front().first;
               long long index = qu.front().second;
                qu.pop();
    
                if(temp->left)
                   qu.push({temp->left, 2*index+1});
               
                if(temp->right)
                  qu.push({temp->right, 2*index+2});
                
             }
        }   
        
       return count; 
       
    }
};
