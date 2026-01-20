class Solution {
public:
    int arrangeCoins(int n) {
        long long int low=1,high=n;
        int m=INT_MAX;
        while(low<=high){
             int mid=(low+high)/2;
           long  long int k=(long(mid)*long(mid+1))/2;
            if(k<n) low=mid+1;
            
            else if(k>n){
                m=min(m,mid);
                high=mid-1;
            }
            else return mid;
        }
        return m-1;
    }
};