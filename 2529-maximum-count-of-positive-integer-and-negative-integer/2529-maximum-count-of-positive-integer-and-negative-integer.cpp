class Solution {
public:
int b(vector<int>&nums,int target){
  int l=0,r=nums.size()-1,re=nums.size();
        while(l<=r){
            int m=(l+r)/2;
            if(nums[m]<target)l=m+1;
            else{
                re=m;
                r=m-1;
            }
        }
        return re;
}
    int maximumCount(vector<int>& nums) {
      int n=b(nums,0);
      int p=nums.size()-b(nums,1);
      return max(n,p);
    }
};