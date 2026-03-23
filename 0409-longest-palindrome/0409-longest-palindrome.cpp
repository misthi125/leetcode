class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> freq(128, 0);

        for (char c : s) freq[c]++;

        int cnt = 0;
        bool hasOdd = false;

        for (int f : freq) {
            cnt += (f / 2) * 2;
            if (f % 2) hasOdd = true;
        }

        return hasOdd ? cnt + 1 : cnt;
    }
};