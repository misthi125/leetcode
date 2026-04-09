class Solution {
public:
string byStringADD(string n1,string n2){
   string ans="";
   int i1=n1.size()-1,i2=n2.size()-1;
   int c=0;
   while(i1>-1 && i2>-1){
int a=n1[i1--]-'0';
int b=n2[i2--]-'0';
ans.push_back('0'+(a+b+c)%10);
c=(a+b+c)/10;
   }
       while(i1>-1){
           int a=n1[i1--]-'0';
ans.push_back('0'+(a+c)%10);
           c=(a+c)/10;
       }
       while(i2>-1){
           int a=n2[i2--]-'0';
      ans.push_back('0'+(a+c)%10);
       c=(a+c)/10;
       }
if(c==1){
   ans.push_back('0'+(c)%10);
}
reverse(ans.begin(),ans.end());
return ans;
}

    string multiply(string n1, string n2) {
        if(n1=="0" || n2=="0")return "0";
        string ans="";
        for(int i=n1.size()-1;i>=0;i--){
   string temp="";
   int c=0;
    int a=n1[i]-'0';


   for(int j=n2.size()-1;j>=0;j--){
      int b=n2[j]-'0';
      int mul=a*b;
      temp.push_back('0'+(mul+c)%10);
      c=(mul+c)/10;
   }
   if(c!=0)temp.push_back('0'+c);
   reverse(temp.begin(),temp.end());
   int k=1;
   while(k<n1.size()-i){
       k++;
       temp.push_back('0');
   }
   ans=byStringADD(ans,temp);   
}
return ans;
    }
};