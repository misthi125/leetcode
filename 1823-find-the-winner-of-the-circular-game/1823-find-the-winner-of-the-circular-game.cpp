class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i=0;i<n;i++){
            q.push(i+1);
        }
        while(q.size()>1){
            int y=1;
            while(y<k){
                q.push(q.front());
                q.pop();
                y++;
            }
            q.pop();
        }     
        return q.front();   
    }
};