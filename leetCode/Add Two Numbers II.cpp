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
        ListNode* newNode(int val){
            ListNode* new_node = new ListNode();
            new_node->val = val;
            new_node->next = NULL;
            return new_node;
    }
    
    ListNode* reverseL1(ListNode* l1){
        ListNode* current = l1;
        ListNode *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            next = current->next;
            current->next = prev;
 
            prev = current;
            current = next;
        }
        l1 = prev;
        
        return l1;
    }
    
    ListNode* reverseL2(ListNode* l2){
         ListNode* current = l2;
         ListNode *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            next = current->next;
            current->next = prev;
 
            prev = current;
            current = next;
        }
        l2 = prev;
        
        return l2;
    }
    
    //final reverse resulted list
       
    ListNode* reverseFullList(ListNode* head){
         ListNode* current = head;
         ListNode *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            next = current->next;
            current->next = prev;
 
            prev = current;
            current = next;
        }
        head = prev;
        
        return head;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
          l1 = reverseL1(l1);
          l2 = reverseL2(l2);    
        
          ListNode *result = NULL;
          ListNode *temp, *prev = NULL;
          int carry=0, sum;
        
        while(l1 != NULL || l2 != NULL){
            sum = carry + (l1? l1->val : 0) + (l2? l2->val : 0);
            carry = (sum >= 10) ? 1 : 0;
            sum %= 10;
            
            temp = newNode(sum);
            if(result == NULL){
                result = temp;
            }else{
                prev->next = temp;
            }
            prev = temp;
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
        }
        if(carry > 0){
            temp->next = newNode(carry);
        }
        return reverseFullList(result);
    }
};
