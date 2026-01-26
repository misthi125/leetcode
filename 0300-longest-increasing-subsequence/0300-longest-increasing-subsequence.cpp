class Solution {
public:
 int bs(const vector<int>&nums,int n){
            int l=0,h=nums.size()-1;
            while(l<=h){
                int m=(l+h)/2;
                if(nums[m]==n)return m;
                else if(nums[m]>n)h=m-1;
                else l=m+1;
            }
            return l;
        }
    int lengthOfLIS(vector<int>& nums) {
       
        vector<int>ans;
        for(auto n:nums){
            if(ans.empty()|| ans.back()<n)ans.push_back(n);
            else{
                int i=bs(ans,n);
                ans[i]=n;
            }
        }
        return ans.size();
    }
};