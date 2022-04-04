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
    
    ListNode* arrayToList(vector<int>vec, int ln){
        
        ListNode *prev = NULL;
        for(int i = ln-1; i>=0; i--){
            ListNode *temp = new ListNode(vec[i]);
            temp->next = prev;
            prev = temp;
        }
        return prev;
    }
    
    
    void makeAnArray(ListNode* head, int k, vector<int>&vec){
        
        ListNode *temp = head;
        
        while(temp != NULL){
            vec.push_back(temp->val);
            temp = temp->next;
        }

        int cnt1;
        cnt1 = vec[k-1];
        vec[k-1] = vec[vec.size()-k];
        vec[vec.size()-k] = cnt1;
         
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        if(!head or !head->next)
            return head;
        
        vector<int>vec;
        makeAnArray(head, k, vec);
          
        return arrayToList(vec, vec.size());
            
    }
};

//without converting to array

class Solution {
public:
    
    ListNode* swapNodes(ListNode* head, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        k--;
        ListNode *fast = head, *slow = head, *prev=NULL;
        
        while(k--) slow = slow->next;
        prev = slow->next;
        
        while(prev != NULL){
            prev = prev->next;
            fast = fast->next;
        }
        swap(fast->val, slow->val);
        return head;
    }
};
