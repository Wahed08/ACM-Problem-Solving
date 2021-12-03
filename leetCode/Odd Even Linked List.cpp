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
    
    ListNode* generateList(ListNode* root){
        if(root == NULL || root->next == NULL)
            return root;
        
        ListNode *even, *odd, *evenPointer;
        odd = root;
        even = root->next;
        evenPointer = root->next;
        
        while(evenPointer != NULL && evenPointer->next != NULL){
            odd->next = odd->next->next;
            odd = odd->next;
            evenPointer->next = evenPointer->next->next;
            evenPointer = evenPointer->next;
        }
        odd->next = even;
        
        return root;
    }
    
    ListNode* oddEvenList(ListNode* head) {
        
        return generateList(head);
    }
};
