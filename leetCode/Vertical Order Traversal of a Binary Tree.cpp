class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        map<int, map<int, multiset<int>>>mapp;
        queue<pair<TreeNode*, pair<int, int>>>q;
        vector<vector<int>>vec;
        
        q.push({root, {0,0}});
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            TreeNode *temp = p.first;
            int a = p.second.first, b = p.second.second;
            mapp[a][b].insert(temp->val);
            
            if(temp->left) q.push({temp->left, {a-1, b+1}});
            if(temp->right) q.push({temp->right, {a+1, b+1}});
            
        }
        
        for(auto x : mapp){
            vector<int>v;
            for(auto it : x.second){
                v.insert(v.end(), it.second.begin(), it.second.end());
            }
            vec.push_back(v);
        }
        return vec;
    }
};
