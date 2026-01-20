class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>n(nums.size(),0);
        for(auto it:nums)n[it-1]++;
        vector<int>ans;
        for(int i=0;i<n.size();i++){
            if(n[i]==0)ans.push_back(i+1);
        }
        return ans;
    }
};