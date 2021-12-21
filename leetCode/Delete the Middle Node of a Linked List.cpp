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
        ListNode* curr, *prev;
        prev = root; 
        curr = root;
        int ln = 0;
        
        while(temp != NULL){
            ln++;
            temp = temp->next;
        }
         if(ln == 1)
             return NULL;
        
        ln = ln/2;
        int j = 0;
         
        while(j <= ln-2){
         j++;
         curr = curr->next;
       }
         
        int i=0;
        while(i <= ln){
            i++;
            prev = prev->next;
        }
         curr ->next = prev;
         // root = curr;
        
        return root;
    }
    
    ListNode* deleteMiddle(ListNode* head) {
        return traverse(head);    
    }
};
