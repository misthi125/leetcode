class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            int l=0,h=grid[0].size()-1;
            while(l<=h){
                int mid=(l+h)/2;
                if(grid[i][mid]>=0)l=mid+1;
                else h=mid-1;
            }
            ans+=(grid[0].size()-l);
        }
        return ans;
    }
};