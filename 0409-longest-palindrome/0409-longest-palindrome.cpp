class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>map;
        for(auto it:s)map[it]++;
        int cnt=0;
        bool si=false;
        for(auto it:map){
            cnt+=2*(it.second/2);
            if(!si && it.second%2==1){
                si=true;
                cnt++;
            }
        }
        return cnt;
    }
};