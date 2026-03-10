class Solution {
public:
    int titleToNumber(string ct) {
      short cnt=0;
      int ans=0;
      for(int i=ct.size()-1;i>-1;i--){
        ans+=(ct[i]-'A'+1)*pow(26,cnt++);
      }  
      return ans;
    }
};