class Solution {
public:

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<pair<int,int>,int>chk;
        vector<int>ans;
        for(int i=0;i<mat.size();i++){
            int l=0,h=mat[0].size(),index=0;
           if(mat[i][0]==1){
            while(l<=h){
                int mid=(l+h)/2;
              if(mid+1<mat[0].size()){
                if((mat[i][mid]==1 &&mat[i][mid+1]==0)){
                    index=mid;
                    break;
                }
              }
              if(mat[i][mid]==1&&mid==mat[0].size()-1){
                index=mid;
                break;
              }
                else if(mat[i][mid]==0)h=mid-1;
                else l=mid+1;
            }
           }
            else index=-1;
            chk[{index,i}]=1;   
        }
        for(auto&[key,val]:chk){
            ans.push_back(key.second);
            k--;
            if(k==0)break;
        }
        return ans;
    }
};