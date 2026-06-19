class Solution {
public:
    int cnt(int n) {
        int c = 0;
        while (n) {
            n = n & (n - 1);
            c++;
        }
        return c;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end());   

        unordered_map<int, vector<int>> m;

        for (auto n : arr) {
            m[cnt(n)].push_back(n);
        }

        vector<int> ans;

        for (int i = 0; i < 33; i++) {
            for (auto x : m[i]) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};