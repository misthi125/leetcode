
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> freq;
        int total = 0;

        for (int x : answers) {
            freq[x]++;
        }

        for (auto it : freq) {
            int x = it.first;
            int count = it.second;

            int groupSize = x + 1;
            int groups = (count + groupSize - 1) / groupSize;

            total += groups * groupSize;
        }

        return total;
    }
};
