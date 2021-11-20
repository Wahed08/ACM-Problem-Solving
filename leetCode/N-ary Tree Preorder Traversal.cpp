/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    
  void printPreorder(Node* node, vector<int> &vec)
        {
            if(node != NULL){
                vec.push_back(node->val);
                for(auto x: node->children)
                    printPreorder(x, vec);
            }  
        }
    
    vector<int> preorder(Node* root) {
        vector<int>vec;
        printPreorder(root, vec);
        return vec;
    }
};
