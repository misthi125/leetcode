class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       
        priority_queue<int>a;
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a.push(matrix[i][j]);
                if(a.size()>k)a.pop();
            }
        }
        return a.top();
    }
};