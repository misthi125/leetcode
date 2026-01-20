class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>&o) {
        if(o.empty()||o[0][0]==1)return 0;
        int r=o.size(),c=o[0].size();
vector<int>dp(c,0);
dp[0]=1;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(o[i][j]==1){
            dp[j]=0;
        }
        else if(j>0)dp[j]+=dp[j-1];
    }
}
return dp[c-1];
    }
};