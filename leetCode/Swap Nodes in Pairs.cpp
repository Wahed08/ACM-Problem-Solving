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
    ListNode* swapPairs(ListNode* head) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* temp = head;
        ListNode* prev = NULL, *result;
        ListNode* curr, *pr;
        int flag = 0;
        
        queue<ListNode*>q;
        
        while(temp != NULL){
            q.push(temp);
            temp = temp->next;
        }
       
        while(!q.empty()){
            
            if(q.size() == 1){
                result->next = q.front();
                return prev;
            }
            
            curr = q.front();
            q.pop();
            pr = q.front();
            q.pop();
            flag++;
            
            pr->next = curr;
            curr->next = NULL;
            
            if(flag == 1){
                prev = pr;
                result = pr->next;
            }
            if(flag != 1){
                result->next = pr;
                result = result->next->next;
            }
           
        }
        
        return prev;
    }
};
