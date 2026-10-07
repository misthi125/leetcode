class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<int> temp = nums;

        int left = (n - 1) / 2;
        int right = n - 1;

        for(int i = 0; i < n; i++) {
            if(i % 2 == 0)
                nums[i] = temp[left--];
            else
                nums[i] = temp[right--];
        }
    }
};