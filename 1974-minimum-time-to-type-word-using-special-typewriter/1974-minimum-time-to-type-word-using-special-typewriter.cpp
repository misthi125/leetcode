
class Solution {
public:
    int minTimeToType(string word) {
        int sum = word.size();
        char prev = 'a';

        for (int i = 0; i < word.size(); i++) {
            int diff = abs(prev - word[i]);
            sum += min(diff, 26 - diff);
            prev = word[i];
        }

        return sum;
    }
};
