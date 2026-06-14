class Solution {
public:
int cnt(int n){
    int c=0;
    while(n){
        n=n&(n-1);
        c++;
    }
    return c;
}

    int countPrimeSetBits(int left, int right) {
        int ans=0;
        vector<bool> prime(21,false);

prime[2]=true;
prime[3]=true;
prime[5]=true;
prime[7]=true;
prime[11]=true;
prime[13]=true;
prime[17]=true;
prime[19]=true;
     for(int i=left;i<=right;i++){
        if(prime[cnt(i)])ans++;
     }   
         return ans;

    }
};