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
    
    void LevelOrder(TreeNode* root, vector<vector<int>>&vec, vector<int>v){
       
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
    }
}
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<vector<int>>vec;
        vector<int>v;
        LevelOrder(root, vec, v);
        
        for(int i=0; i<vec.size(); i++){
            vector<int>temp = vec[i];
            if(i % 2 == 0)
                vec[i] = temp;
            else{
                reverse(temp.begin(), temp.end());
                vec[i] = temp;
            }
        }
        
        return vec;
    }
};
