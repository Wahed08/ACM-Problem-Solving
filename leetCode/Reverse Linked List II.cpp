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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode *temp = head, *prev = NULL;
        vector<int>vec;
        left -= 1;
        right -= 1;
        
        while(temp != NULL){
            vec.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        reverse(vec.begin()+left, vec.begin()+right+1);
        
        for(int i = vec.size()-1; i>=0; i--){
            ListNode *curr = new ListNode;
            curr->val = vec[i];
            curr->next = prev;
            prev = curr;
            temp = temp->next;//
        }
        
        return prev;
    }
};
