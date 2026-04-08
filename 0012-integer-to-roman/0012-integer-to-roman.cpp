class Solution {
public:
string st(int k,int i){
    string rt="";
    if(i==1000){
        while(k--)rt+="M";
    }
    else if(i==100){
        if(k>=5){
            if(k==9)rt+="CM";
            else {
                rt+="D";
                k-=5;
                while(k--)rt+="C";
            }
        }
        else {
            if(k==4)rt+="CD";
            else {
                while(k--)rt+="C";
            }
        }
    
    }

    else if(i==10){
        if(k>=5){
            if(k==9)rt+="XC";
            else {
                rt+="L";
                k-=5;
                while(k--)rt+="X";
            }
        }
        else{
            if(k==4)rt+="XL";
            else{
                while(k--)rt+="X";
            }
        }
    }
    else {
        if(k>=5){
            if(k==9)rt+="IX";
            else {
                rt+="V";
                k-=5;
                while(k--)rt+="I";
            }
        }
        else{
            if(k==4)rt+="IV";
            else{
                while(k--)rt+="I";
            }
        }
    } 
    return rt;
    }

    string intToRoman(int num) {
        int i=1000;
        string ans;
        while(i){
            int k=num/i;
            num=num%i;
        ans+=st(k,i);
            i/=10;
        }
        return ans;
    }
};