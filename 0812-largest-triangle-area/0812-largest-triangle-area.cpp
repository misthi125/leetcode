class Solution {
public:
double getDist(vector<int>& a,vector<int>& b){
double dx=a[0]-b[0],dy=a[1]-b[1];
return sqrt((dx*dx+dy*dy));
}
    double largestTriangleArea(vector<vector<int>>& points) {
        double m=0.0;
        int n=points.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    double a=getDist(points[i],points[j]);
                    double b=getDist(points[j],points[k]);
                    double c=getDist(points[k],points[i]);
                    double s=(a+b+c)/2.0;
                    double r=s*(s-a)*(s-b)*(s-c);
                    if(r<0)r=0;
                    double ar=sqrt(r);
                    m=max(m,ar);
                }
            }
        }
        return m;
    }
};