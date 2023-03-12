class Solution {
public:

    TreeNode* constructBst(ListNode *l1, ListNode* l2){

        if(l1 == l2) return NULL;
        ListNode *slow = l1, *fast = l1;

        while(fast != l2 and fast->next != l2){
            slow = slow->next;
            fast = fast->next->next;
        }

        TreeNode *root = new TreeNode(slow->val);
 
        root->left = constructBst(l1, slow);
        root->right = constructBst(slow->next, l2);

        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {

        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);

        if(head == NULL) return NULL;
        if(head->next == NULL){
            TreeNode *temp = new TreeNode(head->val);
            return temp;
        }

        return constructBst(head, NULL);
    }
};
























