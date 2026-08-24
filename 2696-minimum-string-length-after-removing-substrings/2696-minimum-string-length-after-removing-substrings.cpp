class Solution {
public:
    int minLength(string s) {
        stack<char>a;
        for(auto i:s){
            if(a.empty())a.push(i);
            else{
                if(i=='D' && a.top()=='C')a.pop();
                else if(i=='B' && a.top()=='A')a.pop();
                else a.push(i);
            }
        }
        return a.size();
    }
};