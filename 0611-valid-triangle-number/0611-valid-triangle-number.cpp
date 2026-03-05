class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int cnt=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            int low=j+1,high=nums.size()-1;
            int s=nums[i]+nums[j];
            while(low<=high){
                int mid=(low+high)/2;
                if(s>nums[mid])low=mid+1;
                else high=mid-1;
            }
            cnt+=high-j;
        }
        }
        return cnt;
    }
};