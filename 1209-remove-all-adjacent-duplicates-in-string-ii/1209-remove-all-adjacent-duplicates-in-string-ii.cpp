class Solution {
public:
    string removeDuplicates(string o, int k) {
        stack<string>a;
       for(auto i:o){
        if(!a.empty()){
            if(i==a.top()[0]){
                string s=a.top();
                s.push_back(i);
                a.pop();
                if(s.size()==k)continue;
                else a.push(s);
            }
            else a.push(string(1, i));
        }
        else{
            a.push(string(1, i));
        }
       }
       string ans="";
       while(!a.empty()){
        ans+=a.top();
        a.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};