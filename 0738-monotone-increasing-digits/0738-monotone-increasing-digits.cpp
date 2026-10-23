class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string a=to_string(n);
        bool co=true;
        for(int i=0;i<a.size();i++){
            if((co && i+1<a.size() && a[i]<=a[i+1])||(co && i==a.size()-1))continue;
            else{
                if(co){
                    while(i-1>-1 && a[i-1]==a[i])i--;
                    a[i]=((a[i]-'0')-1)+'0';
                    co=false;
                }
                else a[i]='9';
            }
            
        }
        if(a.size()==1)return a[0]-'0';
        else n=stoi(a);
            return n;
    }
};