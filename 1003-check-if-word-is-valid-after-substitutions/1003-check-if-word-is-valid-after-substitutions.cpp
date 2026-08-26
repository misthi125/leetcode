class Solution {
public:
    bool isValid(string s) {
        stack<char>a;
        for(auto i:s){
            if(a.empty())
                a.push(i);
            
           else{
if(i=='c' && a.top()=='b'){
                a.pop();
                if(!a.empty() && a.top()=='a'){
                    a.pop();
                    continue;
                }
                else{
                    a.push('b');
                }
            }
            a.push(i);
           } 
        }
        return a.size()==0;
    }
};