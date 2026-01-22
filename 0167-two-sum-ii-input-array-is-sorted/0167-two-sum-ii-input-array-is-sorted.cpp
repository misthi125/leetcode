class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        for(int i=0;i<num.size();i++){
            int l=i+1,h=num.size()-1;
            while(l<=h){
                int mid=(l+h)/2;
                if(num[i]+num[mid]==target)return {i+1,mid+1};
                else if(num[i]+num[mid]>target)h=mid-1;
                else l=mid+1;
                }
                
            
        }
        return {-1,-1};
    }
};