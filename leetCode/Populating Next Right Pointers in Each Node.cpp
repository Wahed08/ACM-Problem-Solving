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
           
         while(!qu.empty()){
           int length = qu.size();
           
           for(int i=0; i<length; i++){
               Node *temp = qu.front();
               qu.pop();
               
               if(i+1 == length)
                   temp->next = NULL;
               else
                   temp->next = qu.front();
               
                if(temp->left)
                   qu.push(temp->left);
               
               if(temp->right)
                   qu.push(temp->right);
             }
        }   
        
       return root; 
    }
};
