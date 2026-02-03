class Solution {
public:
int timee(vector<int>&arr,int t,int h){
long long time=0;
for(auto it:arr){
    if(time>h)return INT_MAX;
   if(it%t!=0)time+=it/t+1;
   else time+=it/t;
}
return time;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int minn=INT_MAX;
       
        int low=1,high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=(low+high)/2;
            int n=timee(piles,mid,h);
            if(n<=h){
                minn=min(minn,mid);
            high=mid-1;
            }
            else low=mid+1;
        }
        return minn;
    }
};