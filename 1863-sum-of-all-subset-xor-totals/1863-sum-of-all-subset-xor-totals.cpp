class Solution {
public:
int all(vector<int>&nums,int i , int x){
    if(i>=nums.size())return x;
    return all(nums,i+1,x)+all(nums,i+1,x^nums[i]);
}
    int subsetXORSum(vector<int>& nums) {
        return all(nums,0,0);
    }
};