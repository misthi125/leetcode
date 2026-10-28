class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt=0;
        for(auto i:s){
            if(i=='1')cnt++;
        }
        int si=s.size()-cnt;
        for(int i=0;i<s.size();i++){
            if(cnt>1){
                s[i]='1';
                cnt--;
            }
            else{
                s[i]='0';
            }
        }
        s[s.size()-1]='1';
        return s;
    }
};