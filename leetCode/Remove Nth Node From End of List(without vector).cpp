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
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        ListNode* fast = head;
        ListNode* last = head;
        
        for(int i=0; i<n; i++){
            fast = fast->next;
        }
        if(fast == NULL)
            return head->next;
        while(fast->next != NULL){
            fast = fast->next;
            last = last->next;
        }
        last->next = last->next->next;
        return head;
    }
};
