class Solution {
public:
    int minimumSum(int num) {
        vector<int>ans(4,0);
        int i=3;
        while(num){
           ans[i]=num%10;
            num=num/10;
            i--;
        }
        sort(ans.begin(),ans.end());
        i=ans[0]*10+ans[3]+ans[1]*10+ans[2];
        return i;
    }
};