class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        int i=0;
        map<string,vector<string>>m;
        for(auto a:strs){
string b=""+a;
sort(b.begin(),b.end());
m[b].push_back(a);
        }
        for(auto a:m){
            ans.push_back(a.second);
        }
        return ans;
    }
};