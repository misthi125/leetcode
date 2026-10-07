class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()&&nums[i]<0 && k ){
            nums[i]=-nums[i];
            k--;
            i++;
        }
        i=0;
        int m=nums[0];
        for(auto z:nums){
            i+=z;
            m=min(m,z);
        }
        if(k%2!=0)i-=2*m;
        return i;
    }
};