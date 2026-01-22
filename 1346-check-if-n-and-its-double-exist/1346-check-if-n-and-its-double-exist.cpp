class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            int l,h;
            if(arr[i]>=0){
                l=i+1;
                h=arr.size()-1;
            }
            else {
                l=0;
                h=i;
            }
        while(l<=h){
            int mid=(l+h)/2;
         if(arr[i]*2==arr[mid])return true;
            else if(arr[i]*2<arr[mid])h=mid-1;
            else l=mid+1;
        }
        }
        return false;
    }
};