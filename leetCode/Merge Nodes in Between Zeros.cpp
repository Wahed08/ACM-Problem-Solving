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
    
    ListNode* mergeNodes(ListNode* head) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        if(!head)
            return NULL;
        
        ListNode* temp = head->next;
        ListNode *prev = new ListNode(463463);
        ListNode *t = prev;
        int sum = 0;
        
        while(temp != NULL){
            if(temp->val != 0){
                sum += temp->val;
            }
            else{
                ListNode* curr = new ListNode;
                curr->val = sum;
                curr->next = NULL;
                prev->next = curr;
                prev = prev->next;
                sum = 0;
            }
            temp = temp->next;
        }
        return t->next;
    }
};
