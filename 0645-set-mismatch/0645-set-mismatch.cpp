class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       int a=0,b=0;
       for(int i=0;i<nums.size();i++){
        a=a^(i+1);
        b=b^nums[i];
       } 
       int r=a^b;
       r=r& -r;
       int s=0,ns=0;
       for(int i=1;i<=nums.size();i++){
        if(i&r)s^=i;
        else ns^=i;
       }
       for(auto i:nums){
        if(i&r)s^=i;
        else ns^=i;
       }
       for( auto i:nums){
        if(i==s)return {s,ns};
       }
       return {ns,s};
    }
};