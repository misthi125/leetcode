class Solution {
public:
    int splitNum(int num) {
        string s=to_string(num);
        sort(s.begin(),s.end(),greater<char>());
        num=stoi(s);
        int num1=0,num2=0;
        bool eve=true;
        while(num/10!=0){
            if(eve){
                num1=num1*10+num%10;
                num=num/10;
                eve=false;
            }
            else{
                num2=num2*10+num%10;
                num=num/10;
                eve=true;
            }
        }
        if(num1>num2)num2=num2*10+num%10;
        else num1=num1*10+num%10;
        return num1+num2;
    }
};