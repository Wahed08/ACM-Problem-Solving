/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* first = head;
        ListNode* temp = NULL;
        
        if(head == NULL)
            return NULL;
        
        while(first != NULL && first->next != NULL){
            slow = slow->next;
            first = first->next->next;
            
            if(slow == first){
                temp = slow;
                break;
            }
        }
        if(temp == NULL)
            return NULL;
            
        slow = head;
        
        while(slow != first){
            slow = slow->next;
            first = first->next;
        }
        return slow;
    }
};
