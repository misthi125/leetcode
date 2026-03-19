class Solution {
public:

    string toHex(int n) {
        if(n==0)return "0";
        unsigned int num;
       num=n;
        string s="";
        while(num){
            int k=num%16;
            if(k<10)s.push_back(k+'0');
            else s.push_back((k-10)+'a');  
            num/=16; 
        }
        reverse(s.begin(),s.end());
        return s;
    }
};