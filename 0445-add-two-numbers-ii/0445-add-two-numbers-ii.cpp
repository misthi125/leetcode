class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> a, b;

        // Store digits in stacks
        while (l1) {
            a.push(l1->val);
            l1 = l1->next;
        }

        while (l2) {
            b.push(l2->val);
            l2 = l2->next;
        }

        ListNode* ans = nullptr;
        int carry = 0;

        while (!a.empty() || !b.empty() || carry) {
            int sum = carry;

            if (!a.empty()) {
                sum += a.top();
                a.pop();
            }

            if (!b.empty()) {
                sum += b.top();
                b.pop();
            }

            // Create node and add it at the front
            ListNode* nn = new ListNode(sum % 10);
            nn->next = ans;
            ans = nn;

            carry = sum / 10;
        }

        return ans;
    }
};