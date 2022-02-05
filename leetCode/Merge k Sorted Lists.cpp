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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int>vec;
        
        for(int i=0; i<lists.size(); i++){
            ListNode* temp = lists[i];
            while(temp != NULL){
                vec.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(vec.begin(), vec.end());
        
        ListNode *curr = NULL;
        for(int i=vec.size()-1; i>=0; i--){
             ListNode* head = new ListNode;
             head->val = vec[i];
             head->next = curr;
             curr = head;
        }
       
        return curr;
    }
};
