/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        Node *temp = head, *curr = new Node(459623);
        Node *prev = curr;
        map<Node*, Node*>mapp;
        
        while(temp != NULL){
            
            Node *t = new Node(temp->val);
            prev->next = t;
            mapp[temp] = t;
            prev = prev->next;
            temp = temp->next;
        }
        temp = head;
        prev = curr->next;
        
        while(temp != NULL){
            if(temp->random != NULL)
                prev->random = mapp[temp->random];
            
            temp = temp->next;
            prev = prev->next;
        }
        
        return curr->next;
    }
};
