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
    bool isPalindrome(ListNode* head) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        ListNode* temp = head, *curr = head, *prev = NULL;
        int ln = 0, k;
        
        while(temp != NULL){
            temp = temp->next;
            ln++;
        }
        temp = head;
        
        if(ln == 1) return true;
        ln = (ln % 2 == 0) ? ln/2 : ln/2 + 1;

        while(ln != 0){
            curr = curr->next;
            ln--;
        }
        
        while(curr != NULL){
            ListNode *node = curr->next;
            curr->next = prev;
            prev = curr;
            curr = node;
        }
        
        while(prev != NULL){
            if(temp->val == prev->val){
                prev=prev->next;
                temp = temp->next;
            }else{
                return false;
            }
        }
        return true;
    }
};




