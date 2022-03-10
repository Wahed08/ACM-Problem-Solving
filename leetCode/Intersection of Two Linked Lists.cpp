/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        map<ListNode*, int>mapp;
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        
        while(temp1 != NULL){
           mapp[temp1]++;
            temp1 = temp1->next;
        }
         while(temp2 != NULL){
           mapp[temp2]++;
            temp2 = temp2->next;
        }
        
        for(auto it : mapp)
            if(it.second == 2)
                return it.first;
        return NULL;
    }
};

//without using extra space O(m + n)
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
         ListNode *temp1 = headA;
         ListNode *temp2 = headB;
        
        while(temp1 != temp2){
            temp1 = temp1 != NULL ? temp1->next : headB;
            temp2 = temp2 != NULL ? temp2->next : headA;
        }
        return temp1;
    }
};
