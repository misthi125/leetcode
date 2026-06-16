class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>b;
        int a=0;
        for(auto it:nums){
            a=(a*2+it)%5;
            b.push_back(a==0);
        }
        return b;
    }
};