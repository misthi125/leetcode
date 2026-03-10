class Solution {
public:
    int titleToNumber(string ct) {
      int cnt=0;
      long long ans=0;
      for(int i=ct.size()-1;i>-1;i--){
        ans+=(ct[i]-'A'+1)*pow(26,cnt++);
      }  
      return ans;
    }
};