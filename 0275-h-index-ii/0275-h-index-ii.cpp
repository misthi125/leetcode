class Solution {
public:
    int hIndex(vector<int>&C) {
        int l=0,h=C.size()-1;
        int k=0;
        while(l<=h){
            int m=(l+h)/2;
            if(C[m]>=C.size()-m){
                k=max(k,int(C.size()-m));
                h=m-1;
            }
            else {
                k=max(k,C[m]);
                l=m+1;
            }
        }
        return k;
    }
};