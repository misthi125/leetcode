class Solution {
public:
    int numberOfSteps(int num) {
         int cnt=0;
         while(num){
            if(num%2==0)num>>=1;
            else num--;
            cnt++;
         }
         return cnt;
    }
};