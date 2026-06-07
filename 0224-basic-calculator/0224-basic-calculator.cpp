class Solution {
public:
    int solve(string &s, int &i) {
        long long result = 0;
        long long num = 0;
        int sign = 1;

        while (i < s.size()) {

            if (isdigit(s[i])) {
                num = 0;

                while (i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }

                result += sign * num;
                continue;
            }

            if (s[i] == '+')
                sign = 1;

            else if (s[i] == '-')
                sign = -1;

            else if (s[i] == '(') {
                i++;
                result += sign * solve(s, i);
            }

            else if (s[i] == ')') {
                return result;
            }

            i++;
        }

        return result;
    }

    int calculate(string s) {
        int i = 0;
        return solve(s, i);
    }
};