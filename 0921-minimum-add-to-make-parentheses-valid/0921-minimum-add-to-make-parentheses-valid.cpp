class Solution {
public:
    int minAddToMakeValid(string si) {
        stack<char>s;
        for(auto i:si){
            if(i=='(')s.push(i);
            else {
                if(!s.empty()&&s.top()=='(')s.pop();
                else s.push(i);
            }
        }
        return s.size();
    }
};