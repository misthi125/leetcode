class Solution {
public:
    char findTheDifference(string s, string t) {
      char ans=0;
      int i=0;
      while(i<s.size() || i<t.size()){
        if(i<s.size())ans=ans^s[i];
        if(i<t.size())ans=ans^t[i];
        i++;
      }
              return ans;

    }
};