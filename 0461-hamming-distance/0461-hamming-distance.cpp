class Solution {
public:
    int hammingDistance(int x, int y) {
       x=x^y;
       y=0;
       while(x){
        x=x&(x-1);
        y++;
       } 
       return y;
    }
};