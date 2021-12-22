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
    
    void traverse(ListNode* root){
        
        vector<ListNode*>vec;
        
       if(root && root->next && root->next->next){
           ListNode* temp = root;
           while(temp != NULL){
               vec.push_back(temp);
               temp = temp->next;
           }
           int length = vec.size() - 1;
           int cnt = vec.size() / 2;
           int i = 0;
           for(i; i<cnt; length--){
               vec[i]->next = vec[length];
               vec[length]->next = vec[++i];
           }
           vec[i]->next = NULL;
       }
        
    }
    void reorderList(ListNode* head) {
        traverse(head);
    }
};
