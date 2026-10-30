class Solution {
public:
    int minimumPushes(string word) {
        map<int,int>a;
        int cnt1=0,cnt2=0,cnt3=0,sum=0;
        for(auto i:word){
            if(a[i]==0){
                if(cnt1<8){
                    cnt1++;
                    a[i]=1;
                }
                else if(cnt2<8){
                    cnt2++;
                    a[i]=2;
                }
                else if(cnt3<8){
                    cnt3++;
                    a[i]=3;
                }
                else {
                    a[i]=4;
                }
            }
            sum+=a[i];
        }     
        return sum;   
    }
};