class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> a;
        int c = 0;

        for (auto i : pushed) {
            a.push(i);

            while (!a.empty() && c < popped.size() && a.top() == popped[c]) {
                a.pop();
                c++;
            }
        }

        return a.empty();
    }
};