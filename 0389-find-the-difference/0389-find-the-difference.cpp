class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>a(26,0);
        for(auto it:s)a[it-'a']++;
        for(auto it:t){
            if(a[it-'a']==0)return it;
            else {
                a[it-'a']--;
            }
        }
        return 'a';
    }
};