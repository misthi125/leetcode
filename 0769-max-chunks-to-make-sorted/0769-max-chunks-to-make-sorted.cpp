class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int k=0,z=0,cnt=0;
        for(int i=0;i<arr.size();i++){
            k+=arr[i];
            z+=i;
            if(k==z)cnt++;
        }
        return cnt;
    }
};