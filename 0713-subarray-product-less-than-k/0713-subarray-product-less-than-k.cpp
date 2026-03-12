class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int low=0,high=0;
        int mul=1;
        int cnt=0,n=nums.size();
        if(k<=1)return 0;
        while(high<n){
            mul*=nums[high];
            while(mul>=k && low<=high){
                mul/=nums[low];
                low++;
            }
            cnt+=high-low+1;
            high++;

        }
        return cnt;
    }
};