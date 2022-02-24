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
        
        ListNode* temp = head;
        vector<int>vec;
        int ln = 0;
        
        while(temp != NULL){
            vec.push_back(temp->val);
            temp = temp->next;
            ln++;
        }
        sort(vec.begin(), vec.end());
        ListNode* prev = NULL;
        
        for(int i = vec.size()-1; i>=0; i--){
            ListNode* curr = new ListNode;
            curr->val = vec[i];
            curr->next = prev;
            prev = curr;
        }
        return prev;
    }
};
