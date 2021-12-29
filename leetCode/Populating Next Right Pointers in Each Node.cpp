/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
       if(root == NULL)
           return NULL;
        
       queue<Node*>qu;
       qu.push(root);
       Node *prev=NULL;
           
         while(!qu.empty()){
           int length = qu.size();
           
           while(length--){
               Node *temp = qu.front();
               qu.pop();
               
               temp->next = prev;
               prev = temp;
               
                if(temp->right)
                   qu.push(temp->right);
               
                if(temp->left)
                   qu.push(temp->left);
             }
            prev = NULL;
        }   
        
       return root; 
    }
};
