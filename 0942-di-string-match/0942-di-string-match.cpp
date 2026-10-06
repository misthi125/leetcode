class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans(s.size()+1,0);
        int k=0,y=s.size(),i;
        for(i=0;i<s.size();i++){
            if(s[i]=='I')ans[i]=k++;
            else {
                ans[i]=y;
                y--;
            }
           
        }
         ans[i]=k++;
        return ans;
    }
};