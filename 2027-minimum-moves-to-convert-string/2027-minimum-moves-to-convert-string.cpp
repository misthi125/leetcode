class Solution {
public:
    int minimumMoves(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='O')continue;
            else{
                cnt++;
                i=i+2;
            }
        }
        return cnt;
    }
};