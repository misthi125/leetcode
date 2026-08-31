class Solution {
public:
    int longestWPI(vector<int>& hours) {
        int n = hours.size();

        vector<int> prefix(n + 1, 0);

        // Build prefix sum
        for (int i = 0; i < n; i++) {
            if (hours[i] > 8)
                prefix[i + 1] = prefix[i] + 1;
            else
                prefix[i + 1] = prefix[i] - 1;
        }

        stack<int> st;

        // Build decreasing monotonic stack
        for (int i = 0; i <= n; i++) {
            if (st.empty() || prefix[i] < prefix[st.top()]) {
                st.push(i);
            }
        }

        int ans = 0;

        // Traverse from right to left
        for (int j = n; j >= 0; j--) {

            while (!st.empty() && prefix[j] > prefix[st.top()]) {
                ans = max(ans, j - st.top());
                st.pop();
            }
        }

        return ans;
    }
};