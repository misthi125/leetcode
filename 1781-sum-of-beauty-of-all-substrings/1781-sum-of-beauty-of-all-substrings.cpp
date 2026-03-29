class Solution {
public:
    int beautySum(string s) {
        int ans=0;
       for(int i=0;i<s.size();i++){
map<char,int>f;
for(int j=i;j<s.size();j++){
    int maxi=0;
    int least=INT_MAX;
    f[s[j]]++;
    for(auto k:f){
        if(k.second>0){
            maxi=max(maxi,k.second);
            least=min(least,k.second);
        }
    }
    ans+=maxi-least;
}
       } 
       return ans;
    }
};