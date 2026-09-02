class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,bool>>q;
        for(int i=0;i<tickets.size();i++){
            if(i==k)q.push({tickets[i],true});
            else q.push({tickets[i],false});
        }
        int cnt=0;
        while(1){
            cnt++;
            if(q.front().second==true && q.front().first-1==0)break;
            
            if(q.front().first-1!=0)q.push({q.front().first-1,q.front().second});
            q.pop();
        }
        return cnt;
    }
};