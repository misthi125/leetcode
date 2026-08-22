class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<char> a;

        for(auto it : logs) {
            if(it == "../" && !a.empty()) {
                a.pop();
            }
            else if(it == "./" || it=="../") {
                continue;
            }
            else {
                a.push('a');
            }
        }

        return a.size();
    }
};