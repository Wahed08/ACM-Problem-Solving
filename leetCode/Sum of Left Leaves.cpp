class Solution {
public:
    int dfs(TreeNode* root){
        if(root->left == NULL and root->right != NULL)
            return 0;
        
        if(root->left == NULL)
            return root->val;
        
        dfs(root->left);
        return 0;
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        queue<TreeNode*>q;
        q.push(root);
        int cnt = 0;
        
        while(!q.empty()){
            int ln = q.size();
            while(ln--){
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp->left){
                    q.push(temp->left);
                    cnt += dfs(temp->left);
                    cout<<cnt<<" ";
                }
                if(temp->right)
                    q.push(temp->right);
            }
        }
        return cnt;
    }
};
