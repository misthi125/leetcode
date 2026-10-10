class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(),
     [](vector<int>& a, vector<int>& b) {
         return a[1]>b[1];
     });
     int units=0,i=0;
     while(truckSize>0 && i<boxTypes.size()){
       if(truckSize>boxTypes[i][0]) units+=boxTypes[i][1]*boxTypes[i][0];
       else units+=boxTypes[i][1]*truckSize;
       truckSize-=boxTypes[i][0];
       i++;
     }
     return units;
    }
};