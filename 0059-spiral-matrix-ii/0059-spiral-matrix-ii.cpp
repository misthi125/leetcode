class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> a(n, vector<int>(n));

int i=0,k=1,j=0;
while(k<=n*n){
    int c=j;
    int r=j;
   while(c<n-j){
a[r][c++]=k++;
   }
   c--;
   r++;
   while(r<n-j){
    a[r++][c]=k++;
   }
   r--;
   c--;
   while(c>=j){
    a[r][c--]=k++;
   }
  r--;
   c++;
   while(r>j){
    a[r--][c]=k++;
   }
   j++;
}


return a;
    }
};