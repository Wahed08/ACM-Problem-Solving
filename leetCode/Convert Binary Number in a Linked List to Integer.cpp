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
    
    int Decimal(ListNode* head){
        int length = 0, sum = 0;
        
        ListNode *temp, *curr;
        temp = head;
        curr = head;
        
        while(temp!=NULL){
            length++;
            temp = temp->next;
        }
        int k = length - 1;
        
        while(length--){
            int cnt = curr->val;
            sum += cnt * pow(2, k);
            k--;
            curr = curr->next;
        }
        return sum;
    }
    
    int getDecimalValue(ListNode* head) {
        return Decimal(head);
    }
};
