class Solution {
        const long long MOD = 1e9 + 7;

public:
    long long powl(long long indx,long long n){
long long ans=1;
while(indx>0){
    if(indx & 1) ans=(ans*n)%MOD;
        n=(n*n)%MOD;
        indx>>=1;
    }
    return ans;
    }
    int countGoodNumbers(long long n) {
        long long e=0,p=0;
            e=(n+1)/2;
            p=n/2;
        long long even=powl(e,5),prime=powl(p,4);

            return (even*prime)%MOD ;
    }
};