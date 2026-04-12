class Solution {
public:
    string convertToBase7(int num) {
        string ans="";
        bool sign=num>=0?true:false;
        num=abs(num);
        while(num){
            ans.push_back('0'+(num%7));
            num/=7;
        }
        reverse(ans.begin(),ans.end());
        if(!sign)ans="-"+ans;
        if(ans.size()==0)ans="0";
        return ans;
    }
};