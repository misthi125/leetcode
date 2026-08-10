class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;

        for(int i = prices.size() - 1; i >= 0; i--) {
            int original = prices[i];

            while(!s.empty() && s.top() > original) {
                s.pop();
            }

            if(!s.empty()) {
                prices[i] = original - s.top();
            }

            s.push(original);
        }

        return prices;
    }
};