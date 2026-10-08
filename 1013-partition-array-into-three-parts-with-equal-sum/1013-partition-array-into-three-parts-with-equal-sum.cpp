class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        long long sum = 0;

        for (auto i : arr)
            sum += i;

        if (sum % 3 != 0)
            return false;

        long long target = sum / 3;

        int cnt = 0;
        long long d = 0;

        for (auto i : arr) {
            d += i;

            if (d == target) {
                d = 0;
                cnt++;
            }
        }

        return cnt >= 3;
    }
};