class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
sort(points.begin(), points.end(),
     [](vector<int>& a, vector<int>& b) {
         return a[1] < b[1];
     });
     int prev=points[0][1];
     int cnt=1;
     for(auto i:points){
        if(prev>=i[0])prev=min(prev,i[1]);
        else{
            cnt++;
            prev=i[1];
        }
     }
     return cnt;
         }
};