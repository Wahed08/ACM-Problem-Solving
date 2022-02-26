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
    
     ListNode* mergeSort(ListNode* l1, ListNode* l2){
        
        ListNode* temp1 = l1, *temp2 = l2;
        
        ListNode* newNode = new ListNode;
        newNode->val = 346273;
        newNode->next = NULL;
        ListNode *head = newNode;
        
        while(temp1 != NULL and temp2 != NULL){
            
            if(temp1->val < temp2->val){
               newNode->next = temp1;
               newNode = newNode->next;
               temp1 = temp1->next;
                
            }else{
               newNode->next = temp2;
               newNode = newNode->next;
               temp2 = temp2->next;
            }
        }
        
        while(temp1 != NULL){
           newNode->next = temp1;
           newNode = newNode->next;
           temp1 = temp1->next;
        }
        
         while(temp2 != NULL){
             newNode->next = temp2;
             newNode = newNode->next;
             temp2 = temp2->next;
        }
        return head->next;
    }
    
    ListNode *Divide(ListNode *head){
        
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* slow = head, *fast = head, *temp;

        while(fast != NULL and fast->next != NULL){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = NULL;

        ListNode *left = Divide(head);
        ListNode *right = Divide(slow);

        return mergeSort(left, right);
    }
    
    ListNode* sortList(ListNode* head) {
        
        cin.tie(0), cout.tie(0);
        ios_base::sync_with_stdio(false);
        
        if(head == NULL || head->next == NULL)
            return head;
        
        return Divide(head);
  
    }
};