class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;

        while(head) {
            ListNode* nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }

        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);

        int mx = head->val;

        ListNode* curr = head;

        while(curr && curr->next) {
            if(curr->next->val < mx) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
                mx = curr->val;
            }
        }

        return reverse(head);
    }
};