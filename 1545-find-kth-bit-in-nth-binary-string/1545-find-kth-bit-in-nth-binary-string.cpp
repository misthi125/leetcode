class Solution {
public:
    string reverseInvert(const string& s) {
        string res;
        res.reserve(s.size());

        for (int i = s.size() - 1; i >= 0; i--) {
            res.push_back(s[i] == '0' ? '1' : '0');
        }

        return res;
    }

    string buildString(int n) {
        if (n == 1) return "0";

        string prev = buildString(n - 1);
        string rev = reverseInvert(prev);

        string res;
        res.reserve(prev.size() * 2 + 1);

        res += prev;
        res += '1';
        res += rev;

        return res;
    }

    char findKthBit(int n, int k) {
        return buildString(n)[k - 1];
    }
};