class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        string s1 = s;
        int flag = 0;char c = '0';
        for(int i=0;i<s.size();i++){
            if(s[i]<'9' && flag==0){
                flag=1;c=s[i];
                s[i]='9';
            }
            if(flag==1 && s[i]==c){
                s[i]='9';
            }
        }
        flag=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]>'0' && flag==0){
                flag=1;c=s1[i];
                s1[i]='0';
            }
            if(flag==1 && s1[i]==c){
                s1[i]='0';
            }
        }
        int l = stoi(s),m=stoi(s1);
        return l-m;
    }
};