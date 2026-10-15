
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int i = n - 1, j = 0;

        while (colors[i] == colors[0]) {
            i--;
        }

        while (colors[j] == colors[n - 1]) {
            j++;
        }

        return max(i, n - 1 - j);
    }
};
