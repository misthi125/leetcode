class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       unsigned int c=0;
        for(auto it:nums)c^=it;
        c=c&~(c-1);
        int r=0,l=0;
        for(auto it:nums){
            if(it & c)r^=it;
            else l^=it;
        }
        return {r,l};
    }
};