class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int sum=0;
        bool m=false;
        int k=INT_MAX;
        while(i<=j){
            if( j<nums.size() && sum<target)sum+=nums[j++];
           else if(sum>=target && i<nums.size()){
          k=min(j-i,k);
          sum-=nums[i++];
          m=true;
           }
            else break;
        }
        if(m)return k;
        return 0;
    }
};