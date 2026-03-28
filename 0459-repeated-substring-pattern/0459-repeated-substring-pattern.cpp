class Solution {
public:
    bool repeatedSubstringPattern(string s) {
     string k=s+s;
     bool y=k.substr(1,k.length()-2).find(s)!=string::npos;
     return y;   
    }
};