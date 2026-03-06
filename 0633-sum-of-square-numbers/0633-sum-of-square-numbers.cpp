class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<1)return true;
        for(long i=0;i*i<c;i++){
           long low=i,high=pow(c,0.5);
            while(low<=high){
                long long mid=(low+high)/2;
                long long k=i*i + mid*mid;
                if(k==c)return true;
                else if(k<c)low=mid+1;
                else high=mid-1;
            }
        }

       return false; 
    }
};