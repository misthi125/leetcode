class Solution {
public:
    int binaryGap(int n) {
        int cnt=0,m=0;
        bool fi=false;
        while(n){
            if(n&1){
                if(fi){
                    m=max(m,cnt+1);
                    cnt=0;
                }
                else{
                    fi=true;
                }
            }
            else if(fi)cnt++;
            n=n>>1;
                  }
       return m;
    }
};