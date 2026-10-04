class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        deque<int> maxD, minD;
        long long ans = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {

            // Maintain decreasing deque for maximum
            while (!maxD.empty() && nums[maxD.back()] < nums[right])
                maxD.pop_back();

            maxD.push_back(right);

            // Maintain increasing deque for minimum
            while (!minD.empty() && nums[minD.back()] > nums[right])
                minD.pop_back();

            minD.push_back(right);

            // Shrink window if invalid
            while (nums[maxD.front()] - nums[minD.front()] > 2) {
                
                if (maxD.front() == left)
                    maxD.pop_front();

                if (minD.front() == left)
                    minD.pop_front();

                left++;
            }

            // Number of valid subarrays ending at right
            ans += right - left + 1;
        }

        return ans;
    }
};