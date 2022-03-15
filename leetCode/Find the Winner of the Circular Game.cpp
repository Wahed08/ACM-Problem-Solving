class Solution {
public:
    int findTheWinner(int n, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        ListNode *prev = NULL;
        int x = 1;
        
        for(int i=n; i>=1; i--){
            ListNode *temp = new ListNode(i);
            temp->next = prev;
            prev = temp;
        }
        ListNode *head = prev, *curr = prev;
        while(head->next != NULL) head = head->next;
        head->next = prev;
        
        if(k == 1)
            return n;
        
        while(n != 1){
            if(x == k-1){
                curr->next = curr->next->next;
                x = 1;
                n--;
            }else
                x++;
            curr = curr->next;
        }
        
        return curr->val;
    }
};
