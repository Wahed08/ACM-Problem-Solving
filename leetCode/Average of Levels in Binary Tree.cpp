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
    vector<double> averageOfLevels(TreeNode* root) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<double>ans;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int ln = q.size();
            long sum = 0, x=0;
            double val;
            while(ln--){
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;
                x++;
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            val = 1.0 * sum/x;
            ans.push_back(val);
        }
        return ans;
    }
};
