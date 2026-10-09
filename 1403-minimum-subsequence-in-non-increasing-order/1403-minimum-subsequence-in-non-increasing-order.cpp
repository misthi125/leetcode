class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(auto i:nums){
            sum+=i;
        }
        int i=nums.size()-1;
        int b=0;
        vector<int>ans;
        while(b<=sum && i>=0){
            sum-=nums[i];
            b+=nums[i];
            ans.push_back(nums[i]);
            i--;
        }
        return ans;
    }
};