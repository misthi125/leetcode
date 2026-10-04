class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        queue<int> q;
        int ans = 0;

        for (int i = 0; i < n; i++) {

            // Remove flips that no longer affect index i
            while (!q.empty() && q.front() <= i - 3) {
                q.pop();
            }

            // Number of active flips
            int flips = q.size();

            // If current value is effectively 0
            if ((nums[i] + flips) % 2 == 0) {

                // Cannot start a flip here
                if (i + 2 >= n)
                    return -1;

                // Start a flip at i
                q.push(i);
                ans++;
            }
        }

        return ans;
    }
};