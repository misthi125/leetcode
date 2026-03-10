class Solution {
public:
    int titleToNumber(string ct) {
        int ans=0;
      for(auto c:ct){
        ans=ans*26+(c-'A'+1);
      }
      return ans;
    }
};