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
    
     void LevelOrder(TreeNode* root, vector<vector<int>>&vec, vector<int>v, vector<vector<int>>&ans){
       
       if(root != NULL){
       queue<TreeNode*>qu;
       qu.push(root);
       
       while(!qu.empty()){
           int length = qu.size();
           while(length--){
            TreeNode* temp = qu.front();
               qu.pop();
               
               v.push_back(temp->val);
               if(temp->left){
                   qu.push(temp->left);
               }
                if(temp->right){
                   qu.push(temp->right);
               }
         }
          
           vec.push_back(v);
           v.clear();
           
         }
           for(int i = vec.size()-1; i>=0; i--){
               ans.push_back(vec[i]);
           }
    }
}
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>vec;
        vector<vector<int>>ans;
        vector<int>v;
        LevelOrder(root, vec, v, ans);
        
        return ans;
    }
};
