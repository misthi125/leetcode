class Solution {
public:
    int clumsy(int n) {
        stack<int>a;
        a.push(n);
        n--;
        bool mul=true,div=true,add=true;
        while(n){
            int l=0;
            if(mul){
                l=a.top();
                a.pop();
                a.push(l*n);
                mul=false;
            }
            else if(div){
                l=a.top();
                a.pop();
                a.push(l/n);
                div=false;
            }
            else if(add){
                a.push(n);
                add=false;
            }
            else{
                a.push(n*-1);
                mul=true;
                div=true;
                add=true;
            }
            n--;
        }
        int sum=0;
        while(!a.empty()){
            sum+=a.top();
            a.pop();
        }
        return sum;
    }
};