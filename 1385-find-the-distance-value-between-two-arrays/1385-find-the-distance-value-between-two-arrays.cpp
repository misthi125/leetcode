class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int cnt=arr1.size();
        for(auto it:arr1){
            int l=0,h=arr2.size()-1;
            while(l<=h){
                int m=(l+h)/2;
                if(abs(it-arr2[m])>d){
                    if(it>arr2[m])l=m+1;
                    else h=m-1;
                }
                else {
                    cnt--;
                    break;
                }
            }
        }
        return cnt;
    }
};