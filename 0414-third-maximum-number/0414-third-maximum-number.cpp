class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max1=0,max2=-1,max3=-1;
        for(int i=1;i<nums.size();i++){
if(nums[i]>nums[max1]){
    max3=max2;
    max2=max1;
    max1=i;
}
else if(nums[i]<nums[max1]){
    if(max2>-1?nums[i]>nums[max2]:true){
        max3=max2;
        max2=i;
    }
    else if(nums[i]<nums[max2]){
        if(max3>-1?nums[i]>nums[max3]:true)max3=i;
    }
}
        }
        if(max3==-1)return nums[max1];
return nums[max3];
    }
};