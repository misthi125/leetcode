class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int r=s.size()-1,l=0;
        while(l<r){
            if(s[r]==s[l]){
                r--;
                l++;
            }
            else{
                if(s[r]<s[l])s[l]=s[r];
                else s[r]=s[l];
                l++;
                r--;
            }
        }
        return s;
    }
};