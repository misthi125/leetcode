class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {

        deque<int> maxi;
        deque<int> mini;

        int left = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

           
            while (!maxi.empty() && maxi.back() < nums[right])
                maxi.pop_back();

            maxi.push_back(nums[right]);

          
            while (!mini.empty() && mini.back() > nums[right])
                mini.pop_back();

            mini.push_back(nums[right]);

            
            while (maxi.front() - mini.front() > limit) {

                if (maxi.front() == nums[left])
                    maxi.pop_front();

                if (mini.front() == nums[left])
                    mini.pop_front();

                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};