class Solution {
public:
    int sum = 0;
    int traversal(TreeNode* root, int maximum){
        
        if(root == NULL) return sum;
        if(root->val >= maximum){
            maximum = max(root->val, maximum);
            sum++;
        }
        
        int left = traversal(root->left, maximum);
        sum = 0;
        int right = traversal(root->right, maximum);
        
        return left + right;
    }
    
    int goodNodes(TreeNode* root) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int ans1 = traversal(root->left, root->val);
        int ans2 = traversal(root->right, root->val);
        
        return ans1 + ans2 + 1;
    }
};

//
class Solution {
public:
    int traversal(TreeNode* root, int maximum){
        
        if(root == NULL) return 0;
        int sum = 0;
        if(root->val >= maximum){
            maximum = max(root->val, maximum);
            sum++;
        }
        return sum + traversal(root->left, maximum) + traversal(root->right, maximum);
    }
    
    int goodNodes(TreeNode* root) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int ans = traversal(root, root->val);
        return ans;
    }
};
