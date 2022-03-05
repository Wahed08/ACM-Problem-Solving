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
    ListNode* makeList(vector<int>&vec){
        
        ListNode *prev = NULL;
        for(int i = vec.size()-1; i>=0; i--){
            ListNode *curr = new ListNode;
            curr->val = vec[i];
            curr->next = prev;
            prev = curr;
        }
        return prev;
    }
    
    ListNode* mergeNodes(ListNode* head) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        if(!head)
            return NULL;
        
        ListNode* temp = head->next;
        vector<int>vec;
        int sum = 0;
        
        while(temp != NULL){
            if(temp->val != 0){
                sum += temp->val;
            }
            else{
               vec.push_back(sum);
               sum = 0;
            }
            temp = temp->next;
        }
        return makeList(vec);
    }
};
