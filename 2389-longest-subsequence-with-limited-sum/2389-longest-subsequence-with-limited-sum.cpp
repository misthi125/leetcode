class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size(),m=queries.size();
        sort(nums.begin(),nums.end());
        int sum=0;
        vector<int>pre;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            pre.push_back(sum);
        }
        vector<int>ans(m,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(pre[j]<=queries[i])ans[i]=j+1;
                else break;
            }
        }
        return ans;
    }
};