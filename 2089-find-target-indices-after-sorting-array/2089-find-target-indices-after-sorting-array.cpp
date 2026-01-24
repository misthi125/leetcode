class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> ans;

        int l = 0, h = n - 1;
        int lb = -1;  

        while (l <= h) {
            int m = (l + h) / 2;
            if (nums[m] < target) {
                lb = m;
                l = m + 1;
            } else {
                h = m - 1;
            }
        }

        l = 0; h = n - 1;
        int hb = n;    

        while (l <= h) {
            int m = (l + h) / 2;
            if (nums[m] > target) {
                hb = m;
                h = m - 1;
            } else {
                l = m + 1;
            }
        }

        for (int i = lb + 1; i <= hb - 1; i++) {
            if (nums[i] == target) ans.push_back(i);
        }

        return ans;
    }
};
