class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>a(2,0);
        sort(nums.begin(),nums.end());
        int j=1;
        for(int i=0;i<nums.size();i++){
            if(j==nums[i])j++;
            else{
                if(nums[i]==j-1)a[0]=nums[i];
                else {
                    a[1]=j++;
                    i--;
                }
            }
        }
        if(a[1]==0)a[1]=j;
        return a;
    }
};