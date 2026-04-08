class Solution {
public:
string RLE (string s){
int strt=0,end=0;
string ans="";
while(end<s.size()){
if(s[strt]==s[end])end++;
else {
    ans+=to_string(end-strt)+s[strt];
    strt=end;
}
}
ans+=to_string(end-strt)+s[strt];
return ans;
}
    string countAndSay(int n) {
        string k="1";
        n--;
        while(n--)k=RLE(k);
        return k;
    }
};