class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        queue<TreeNode*>q;
        q.push(root);
        vector<int>vec;
        
        if(!root) return {};
        
        while(!q.empty()){
            int ln = q.size();
            for(int i=0; i<ln; i++){
                TreeNode *temp = q.front();
                q.pop();
                
                if(i==ln-1) vec.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return vec;
    }
};
