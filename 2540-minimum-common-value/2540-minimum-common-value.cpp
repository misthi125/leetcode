class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(auto it:nums1){
            int l=0,h=nums2.size()-1;
            while(l<=h){
                int m=(l+h)/2;
                if(nums2[m]==it)return it;
                else if(it>nums2[m])l=m+1;
                else h=m-1;
            }
        }
        return -1;
    }
};