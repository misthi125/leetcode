class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int m=0;
        sort(heaters.begin(),heaters.end());
        for(int i=0;i<houses.size();i++){
          auto j=lower_bound(heaters.begin(),heaters.end(),houses[i]);
          int k=(j!=heaters.end())?*j:-1;
          if(k!=-1){
             int in=find(heaters.begin(),heaters.end(),k)-heaters.begin();
          int l=in-1>=0?heaters[in-1]:k;
          k=min(k-houses[i],abs(houses[i]-l));
          m=max(m,k);
          }
          else{
            k=heaters[heaters.size()-1];
            m=max(m,houses[i]-k);
          }
          
        }

        return m;
    }
};
