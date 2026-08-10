class Solution {
public:
    string removeDuplicates(string a) {
        stack<char>s;
        for(auto it:a){
            if(!s.empty()&&s.top()==it){
                    s.pop();
                    continue;
            }
           else s.push(it);     
        }
            a="";
        while(!s.empty()){
         a.push_back(s.top());
            s.pop();
        }
        reverse(a.begin(), a.end());
        return a;
    }
};