class Solution {
public:
    int xorOperation(int n, int start) {
      long long int ans=0;
      for(int i=0;i<n;i++)ans^=start+2*i;
      return ans;  
    }
};