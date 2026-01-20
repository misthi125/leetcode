class Solution {
public:
    int mySqrt(int x) {
        if(x<2)return x;
        int low=1,high=x/2;
       
        while(low<=high){
          long long int mid=(low+high)/2;
unsigned long  long int s=mid*mid;
            if(s==x)return mid;
            else if(s<x)low=mid+1;
            else high=mid-1;
        }
        return low-1;
    }
};