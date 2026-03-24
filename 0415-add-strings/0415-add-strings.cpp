class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int c=0;
        int i=num1.size()-1,j=num2.size()-1;
        while(i>-1 || j>-1 || c){
            int a=0,b=0;
            if(i>-1)a+=num1[i--]-'0';
            if(j>-1)b+=num2[j--]-'0';
            ans.push_back((a+b+c)%10+'0');
            c=(a+b+c)/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};