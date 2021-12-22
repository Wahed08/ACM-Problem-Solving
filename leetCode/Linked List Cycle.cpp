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
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* first = head;
        
        while(first != NULL && first->next != NULL){
            slow = slow->next;
            first = first->next->next;
            
            if(slow == first)
                return true;
        }
        return false;
    }
};
