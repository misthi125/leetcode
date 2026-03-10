class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size()-1;
        while(n>-1&&s[n]==' ')s.erase(n--,1);
    n=s.find_last_of(' ');
    return s.size()-n-1;

    }
};