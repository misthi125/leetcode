class Solution {
public:
    vector<string> ans;

    void dfs(string& num, int target, int pos,
             string expr, long long value, long long prev) {

        if (pos == num.size()) {
            if (value == target)
                ans.push_back(expr);
            return;
        }

        long long cur = 0;

        for (int i = pos; i < num.size(); i++) {

            if (i > pos && num[pos] == '0')
                break;

            cur = cur * 10 + (num[i] - '0');
            string part = num.substr(pos, i - pos + 1);

            if (pos == 0) {
             
                dfs(num, target, i + 1,
                    part, cur, cur);
            } else {

                dfs(num, target, i + 1,
                    expr + "+" + part,
                    value + cur,
                    cur);

                dfs(num, target, i + 1,
                    expr + "-" + part,
                    value - cur,
                    -cur);

                dfs(num, target, i + 1,
                    expr + "*" + part,
                    value - prev + prev * cur,
                    prev * cur);
            }
        }
    }

    vector<string> addOperators(string num, int target) {
        dfs(num, target, 0, "", 0, 0);
        return ans;
    }
};