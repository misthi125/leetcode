class Solution {
public:
int cnt(int n){
    int c=0;
    while(n){
        n=n&(n-1);
        c++;
    }
    return c;
}
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string>a;
        for(int i=0;i<12;i++){
            for(int j=0;j<60;j++){
                if(cnt(i)+cnt(j)==turnedOn){
                    string k=to_string(i)+":";
                    if(j<10)k+='0';
                     k+=to_string(j);
                    a.push_back(k);
                }
            }
        }
        return a;
    }
};