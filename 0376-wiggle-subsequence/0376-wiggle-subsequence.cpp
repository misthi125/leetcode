class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() <= 1)
            return nums.size();

        int ans = 1;
        int prevDiff = 0;

        for (int i = 1; i < nums.size(); i++) {
            int diff = nums[i] - nums[i - 1];

            if (diff > 0 && prevDiff <= 0) {
                ans++;
                prevDiff = diff;
            }
            else if (diff < 0 && prevDiff >= 0) {
                ans++;
                prevDiff = diff;
            }
        }

        return ans;
    }
};