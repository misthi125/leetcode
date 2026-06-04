class Solution {
public:
    int solve(int s, int e, vector<int>& nums, vector<vector<int>>& dp) {
        if (s == e) return nums[s];

        if (dp[s][e] != -1) return dp[s][e];

        int left = nums[s] - solve(s + 1, e, nums, dp);
        int right = nums[e] - solve(s, e - 1, nums, dp);

        return dp[s][e] = max(left, right);
    }

    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> dp(n, vector<int>(n, -1));

        return solve(0, n - 1, nums, dp) >= 0;
    }
};