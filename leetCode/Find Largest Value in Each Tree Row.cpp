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
    vector<int> largestValues(TreeNode* root) {
        vector<int>st;
        if(root != NULL){   
        queue<TreeNode*>q;
        vector<int>vec;
        q.push(root);
        
        while(!q.empty()){
            int length = q.size();
            while(length--){
                TreeNode* temp = q.front();
                q.pop();
                
                vec.push_back(temp->val);
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            sort(vec.begin(), vec.end());
            st.push_back(vec[vec.size()-1]);
            vec.clear();
        }
    }
       
        return st;
    }
};
