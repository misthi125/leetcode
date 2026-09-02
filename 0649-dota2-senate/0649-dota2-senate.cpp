class Solution {
public:
    string predictPartyVictory(string senate) {
        int r=0,d=0;
        int rm=0,dm=0;
        queue<char>q;
        for(auto i:senate){
            if(i=='R')r++;
            else d++;
            q.push(i);
        }
        string s;
        while(!q.empty()){
            if( q.front()=='R'){
                if(dm==0){
                    q.push(q.front());
                    
                    rm++;
                    d--;
                }
                else dm--;
                q.pop();
                
            }
            else if( q.front()=='D'){
                if(rm==0){
                    q.push(q.front());
                   
                    r--;
                    dm++;
                }
                else rm--;
                 q.pop();
            }
            if(r<=0){
                s="Dire";
                break;
            }
            if(d<=0){
                s="Radiant";
                break;
            }
        }
        return s;
    }
};