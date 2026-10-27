class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxVal = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            maxVal = max(maxVal, nums[i]);
        }
        return maxVal * k + (k * (k - 1) / 2);
    }
};