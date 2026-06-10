class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
        int cnt=0,num;
        for(int i=0;i<n+1;i++){
            cnt=0;
            num=i;
            while(num){
                num=num&(num-1);
                cnt++;
            }
            ans[i]=cnt;
        }
        return ans;
    }
};