class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length()<=k)return "0";
        stack<char>a;
        a.push(num[0]);
        string ans="";
     for(int i=1;i<num.size();i++){
        while(!a.empty()&& k && a.top()>num[i]){
            a.pop();
            k--;
        
        }
        a.push(num[i]);
     } 
     while(k && !a.empty())
     {
        k--;
        a.pop();
     }
     while(!a.empty()){
        ans.push_back(a.top());
        a.pop();
     }
     reverse(ans.begin(),ans.end());
     int i=0;
     while(ans[i]=='0')ans.erase(ans.begin());
     if(ans.length()==0)return "0";
     return ans;

    }
};