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
    
    void insert(ListNode** root, int item){
        
        ListNode* temp = new ListNode;
        temp->val = item;
        temp->next = *root;
        *root = temp;
}
    
    ListNode* arrayToList(vector<int>vec, int ln){
        
        ListNode *root = NULL;
        for (int i = ln-1; i >=0; i--)
            insert(&root, vec[i]);
       return root;
    }
    
    
    void makeAnArray(ListNode* head, int k, vector<int>&vec){
        
        if(head != NULL || !head->next){
       
        ListNode *temp = head;
        
        while(temp->next != NULL){
            vec.push_back(temp->val);
            temp = temp->next;
        }
        vec.push_back(temp->val);
     }
        int cnt1;
        cnt1 = vec[k-1];
        vec[k-1] = vec[vec.size()-k];
        vec[vec.size()-k] = cnt1;
         
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int>vec;
        
        makeAnArray(head, k, vec);
          
        return arrayToList(vec, vec.size());
            
        // return head;
    }
};
