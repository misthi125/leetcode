class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int as=0,bs=0;
        for(auto i:aliceSizes)as+=i;
        for(auto i:bobSizes)bs+=i;
        sort(aliceSizes.begin(),aliceSizes.end());
        sort(bobSizes.begin(),bobSizes.end());
        for(auto x:aliceSizes){
            int l=0,h=bobSizes.size()-1;
            while(l<=h){
                int mid=(l+h)/2;
                if(as-x+bobSizes[mid]==bs+x-bobSizes[mid])return{x,bobSizes[mid]};
                else if(as-x+bobSizes[mid]>bs+x-bobSizes[mid])h=mid-1;
                else l=mid+1;
                            }
        }
        return {0,0};
    }
};