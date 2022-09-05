class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        if(root == NULL) return {};
        
        queue<Node*>q;
        q.push(root);
        vector<vector<int>>vec;
        
        while(!q.empty()){
            int ln = q.size();
            vector<int>v;
            while(ln--){
                Node* temp = q.front();
                q.pop();
                v.push_back(temp->val);
                
                for(auto it : temp->children) q.push(it);
            }
            vec.push_back(v);
        }
        return vec;
    }
};
