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
    
    ListNode* traverse(ListNode* root){
        ListNode* temp = root;
        int ln = 0;
        
        while(temp != NULL){
            ln++;
            temp = temp->next;
        }
        ln = ln/2;
        ListNode *curr = root;
        while(ln!= 0){
            ln--;
            curr = curr->next;
        }
        root = curr;
        
        return root;
    }
    
    ListNode* middleNode(ListNode* head) {
        return traverse(head);    
    }
};


// using cycle detect approach in linked list
class Solution {
public:
    
    ListNode* middleNode(ListNode* head) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        ListNode* slow = head, *fast = head;
        
        if(head == NULL || head->next == NULL)
            return head;
        
        while(fast != NULL and fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
};
