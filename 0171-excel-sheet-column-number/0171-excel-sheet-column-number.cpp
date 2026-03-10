class Solution {
public:
    int titleToNumber(string ct) {
      long cnt=1;
      int ans=0;
      for(int i=ct.size()-1;i>-1;i--){
        ans+=(ct[i]-'A'+1)*cnt;
        cnt=cnt*26;
      }  
      return ans;
    }
};