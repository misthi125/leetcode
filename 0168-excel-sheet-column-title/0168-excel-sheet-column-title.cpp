class Solution {
public:
    string convertToTitle(int cn) {
        int cnt=1;
        string ans="";
        while(cn){
        int k=1;
       while((cn-k)%26!=0)k++;
        cn-=k;
        ans.push_back(k-1+'A');
        cn=cn/26;
        }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};