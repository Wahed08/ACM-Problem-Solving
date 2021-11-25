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
    ListNode* sortList(ListNode* head) {
        cin.tie(0), cout.tie(0);
        ios_base::sync_with_stdio(false);
        
        ListNode *i, *j;
        
        i = head;
        
        for(i = head; i != NULL; i = i->next){
            for(j = i->next; j != NULL; j = j->next){
                if(i->val > j->val){
                    int temp;
                    temp = i->val;
                    i->val = j->val;
                    j->val = temp;
                }
            }
        }
        return head;
    }
};
