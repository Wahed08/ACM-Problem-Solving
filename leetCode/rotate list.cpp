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
    
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0 || !head->next){
            return head;
        }
        
        int length = 1;
        ListNode* temp = head;
        
        while(temp->next != NULL){
            temp = temp->next;
            length++;
        }
        cout<<length;
        
        k = k % length;
        k = length - k;
        temp->next = head;
        
        for(int i=0; i<k; i++){
            temp = temp->next;
            // cout<<temp->val;
        }
        
        head = temp->next;
        temp->next = NULL;
        
        return head;
    }
};
