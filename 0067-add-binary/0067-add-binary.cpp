class Solution {
public:
    string addBinary(string a, string b) {
       long long i=a.size()-1,j=b.size()-1,c=0;
       string k="";
        while(i>-1 || j>-1){
            int y=0,x=0;
            if(i>-1)y=a[i--]-'0';
            if(j>-1)x=b[j--]-'0';
            y+=x+c;
            if(y==3){
                c=1;
                y=1;
            }
            else if(y==2){
                y=0;
                c=1;
            }
            else c=0;
          k=to_string(y)+k;
           
        }
        if(c==1)k=to_string(c)+k;
        return k;
    }
};