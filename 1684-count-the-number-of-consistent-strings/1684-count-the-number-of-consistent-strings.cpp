class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int a=0,cnt=0,m=0;
        for(auto i:allowed){
            a=a | (1<<(i-'a'));
        }
        for(auto z:words){
            m=0;
            for(auto i:z){
                m=m | (1<<(i-'a'));
            }
            if((m|a)==a)cnt++;
        }
        return cnt;
    }
};