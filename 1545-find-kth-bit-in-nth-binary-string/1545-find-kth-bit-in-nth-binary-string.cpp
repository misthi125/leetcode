class Solution {
public:
string revers(string a){
    string k="";
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]=='0')k.push_back('1');
        else k.push_back('0');
    }
    return k;
}
string a(int n){
    if(n==1)return "0";
    string p=a(n-1);
    return p+"1"+revers(p);
}
    char findKthBit(int n, int k) {
        string ki=a(n);
        return ki[k-1];
    }
};