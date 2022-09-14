// Memory Limit Exceeded 53/56

class Solution {
public:
    vector<vector<int>>ans;
    void dfs(TreeNode* root, vector<int>&vec){
        
        if(root == NULL) return;
        
        if(root->left == NULL and root->right == NULL){
            vec.push_back(root->val);
            ans.push_back(vec);
            vec.pop_back();
            return;
        }
        vec.push_back(root->val);
        dfs(root->left, vec);
        dfs(root->right, vec);
        vec.pop_back();
        
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int>vec;
        int count=0;
        dfs(root, vec);
        
        for(auto it : ans){
            unordered_map<int, int>mapp;
            int even=0, odd=0;
            for(auto x : it) mapp[x]++;
            for(auto i : mapp){
                if(i.second % 2 == 0) even++;
                else odd++;
            }
            if(odd <= 1) count++;
        }
        
        return count;
    }
};

//Accepted

class Solution {
public:
    int count = 0;
    void dfs(TreeNode* root, int value){
        
        if(root == NULL) return;
            value ^= (1 << root->val); // xor operator find single odd value
            if(root->left == NULL and root->right == NULL){
                if((value & (value-1)) == 0){
                    count++;
                }
            }
            dfs(root->left, value);
            dfs(root->right, value);

    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        dfs(root, 0);
        return count;
    }
};
