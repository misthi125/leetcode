class Solution {
    int su;
    vector<int>w;
public:
    Solution(vector<int>& wi) {
        su=0;
        for(int i=0;i<wi.size();i++){                
            su+=wi[i];
            w.push_back(su);
        }
    
    }
    
    int pickIndex() {
        int k=rand()%su+1;
        int l=0,h=w.size()-1;
        while(l<h){
            int m=(l+h)/2;
            if(w[m]>=k)h=m;
            else l=m+1;
        }
return l;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */