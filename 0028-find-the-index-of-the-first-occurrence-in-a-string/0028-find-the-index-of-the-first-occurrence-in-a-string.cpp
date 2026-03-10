class Solution {
public:
    int strStr(string haystack, string needle) {
        int a=haystack.find(needle);
        if(a<haystack.size())return a;
        return -1;
    }
};