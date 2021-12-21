/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* traverse(ListNode* root){
        ListNode* temp = root;
        int ln = 0;
        
        while(temp != NULL){
            ln++;
            temp = temp->next;
        }
        ln = ln/2;
        ListNode *curr = root;
        while(ln!= 0){
            ln--;
            curr = curr->next;
        }
        root = curr;
        
        return root;
    }
    
    ListNode* middleNode(ListNode* head) {
        return traverse(head);    
    }
};
