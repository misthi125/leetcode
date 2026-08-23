class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>>a;
        vector<int>ans(t.size(),0);
        for(int i=t.size()-1;i>-1;i--){
            while(!a.empty()&& t[i]>=a.top().first)a.pop();
            if(!a.empty())ans[i]=a.top().second-i;
            a.push({t[i],i});
        }
        return ans;
    }
};