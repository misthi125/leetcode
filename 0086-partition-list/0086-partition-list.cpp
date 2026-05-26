class Solution {
public:
    ListNode* partition(ListNode* head, int x) {

        ListNode* p = NULL;
        ListNode* g = NULL;
        ListNode* curr = head;

        while (curr) {

            if (curr->val < x) {

                if (!g) {

                    if (curr == head) {
                        g = curr;
                        p = curr;
                        curr = curr->next;
                        continue;
                    }
                    else {

                        p->next = curr->next;
                        curr->next = head;
                        head = curr;
                        g = curr;

                        curr = p->next;
                        continue;
                    }
                }

                if (g->next == curr) {
                    g = curr;
                    p = curr;
                    curr = curr->next;
                    continue;
                }

                p->next = curr->next;
                curr->next = g->next;
                g->next = curr;
                g = g->next;

                curr = p->next;
            }
            else {

                p = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};