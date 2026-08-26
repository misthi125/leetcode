class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> a;

        for (auto i : s) {
            if (i == ')') {
                string te = "";

                while (a.top() != "(") {
                    te= a.top()+te;
                    a.pop();
                }
                reverse(te.begin(),te.end());
                a.pop(); // Remove '('
                a.push(te);
            }
            else {
                a.push(string(1, i));
            }
        }

        string ans = "";
        while (!a.empty()) {
            ans = a.top() + ans;
            a.pop();
        }

        return ans;
    }
};