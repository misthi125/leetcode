class Solution {
public:
    ListNode* left;

    void solve(ListNode* right) {
        if (!right) return;

        solve(right->next);

        if (!left) return;

        if (left == right || left->next == right) {
            right->next = nullptr;
            left = nullptr;
            return;
        }

        ListNode* nxt = left->next;

        left->next = right;
        right->next = nxt;

        left = nxt;
    }

    void reorderList(ListNode* head) {
        left = head;
        solve(head);
    }
};