class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char>a;
        int cnt=0;
        for(auto i:s){
            if(i=='(')cnt++;
            else if(i==')')cnt--;
            if(cnt<0){
                cnt++;
                continue;
            }
            a.push(i);
        }
        string ans="";
        while(!a.empty()){
            if(cnt && a.top()=='(')cnt--;
            else{
                ans.push_back(a.top());
            }
            a.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};