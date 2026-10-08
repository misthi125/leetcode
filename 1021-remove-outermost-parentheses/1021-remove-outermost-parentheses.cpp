class Solution {
public:
    string removeOuterParentheses(string s) {
        if(s.size()==2)return "";
        int open=0,close=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==')')close++;
          else  if(s[i]=='(')open++;
          if(close==open && open!=0){
            s.erase(i,1);
            int j=i-open-close+1;
            s.erase(j,1);
            i=i-2;
            open=0;
            close=0;
          }
        }
        return s;
    }
};