class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int m1=0,m2=0;  
      for(auto a:nums){
        if(a>=m1){
            m2=m1;
            m1=a;
        }
        else if(a>m2){
            m2=a;
        }
      }
      return (m1-1)*(m2-1);
    }
};