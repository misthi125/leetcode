class Solution {
public:
    int countDigitOne(int n) {
        long long ans = 0;

        for (long long pos = 1; pos <= n; pos *= 10) {
            long long left = n / (pos * 10);
            long long cur = (n / pos) % 10;
            long long right = n % pos;

            if (cur == 0)
                ans += left * pos;
            else if (cur == 1)
                ans += left * pos + right + 1;
            else
                ans += (left + 1) * pos;
        }

        return ans;
    }
};