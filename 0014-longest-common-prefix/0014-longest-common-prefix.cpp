class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string ans="";
       sort(str.begin(),str.end());
       string a=str[0],b=str[str.size()-1];
       for(int i=0;i<min(a.size(),b.size());i++){
if(a[i]==b[i])ans=ans+a[i];
else break;
       }
       return ans;
    }
};