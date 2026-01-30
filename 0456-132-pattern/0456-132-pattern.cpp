class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       stack<pair<int,int>>ans;
       int m=nums[0];
       for( int i=1;i<nums.size();i++){
        int n=nums[i];
        while(!ans.empty() && n>=ans.top().first)ans.pop();
        if(!ans.empty() && n>ans.top().second)return true;
        ans.push(make_pair(n,m));
        m=min(m,n);
       }
       return false;
    }
};