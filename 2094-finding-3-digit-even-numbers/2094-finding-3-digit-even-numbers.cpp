class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>c(10,0);
        for(auto i:digits)c[i]++;
        vector<int>ans;
        for(int i=100;i<999;i+=2){
            vector<int>cr(10,0);
            int k=i;
            while(k){
                cr[k%10]++;
                k/=10;
            }
        
            bool m=true;
            for(int j=0;j<10;j++){
                if(cr[j]>c[j]){
                    m=false;
                    break;
                }
            }
                if(m)ans.push_back(i);
            
        }
        return ans;
    }
};