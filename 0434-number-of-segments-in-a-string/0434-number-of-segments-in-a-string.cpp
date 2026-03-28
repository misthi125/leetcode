class Solution {
public:
    int countSegments(string s) {
      int cnt=0;
      bool chk=false;
      for(auto c:s) {
        if(c!=' ' && !chk){
            cnt++;
            chk=true;
        }
        else if(c==' ')chk=false;
      }
      return cnt;
    }
};