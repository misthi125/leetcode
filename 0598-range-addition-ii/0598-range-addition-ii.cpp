class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int r=m;
        int c=n;
        for(int i=0;i<ops.size();i++){
            r=min(ops[i][0],r);
            c=min(ops[i][1],c);
        }
        return r*c;
    }
};