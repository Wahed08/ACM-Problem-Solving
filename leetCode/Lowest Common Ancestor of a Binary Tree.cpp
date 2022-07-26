class Solution {
public:
    vector<vector<TreeNode*>>ans;
    void dfs(TreeNode* root, vector<TreeNode*>&vec, TreeNode *p, TreeNode *q){
        
        if(root == NULL)return;
        vec.push_back(root);
        if(root == p || root == q){
            ans.push_back(vec);
            return;
        }
        dfs(root->left, vec, p, q);
        vec.pop_back();
        dfs(root->right, vec, p, q);
       
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<TreeNode*>vec;
        dfs(root, vec, p, q);
        
        if(ans.size()==1) return ans[0][ans[0].size()-1];
    
        vector<TreeNode*>v1 = ans[0];
        vector<TreeNode*>v2 = ans[1];
        
        for(int i=0; i<min(v1.size(), v2.size()); i++){
            if(v1[i] != v2[i]){
                return v1[i-1];
            }
        }
        
        return v1[v1.size()-1];
    }
};

// without space 0(1)

class Solution {
public:
    TreeNode* dfs(TreeNode* root, TreeNode *p, TreeNode *q){
        
        if(root == NULL) return NULL;
        if(root == p || root == q) return root;
        
        TreeNode *left = dfs(root->left, p, q);
        TreeNode *right = dfs(root->right, p, q);
        
        if(left != NULL and right != NULL) return root;
        return left != NULL? left : right;
       
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        return dfs(root, p, q);
    }
};
