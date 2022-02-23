/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void dfs(Node* temp, Node* node, vector<Node*>&vis){
        
        vis[temp->val] = temp;
        for(auto it : node->neighbors){
            if(vis[it->val] == NULL){
                Node* curr = new Node(it->val);
                temp->neighbors.push_back(curr);
                dfs(curr, it, vis);
            }else{
                temp->neighbors.push_back(vis[it->val]);
            }
        }
    }
    
    Node* cloneGraph(Node* node) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        if(node == NULL)
            return NULL;
        
        vector<Node*>vis(101, NULL);
        Node* temp = new Node(node->val);
        dfs(temp, node, vis);
        
        return temp;
    }
};
