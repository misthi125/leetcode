class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>a;
        a.push_back(first);
        for(auto i:encoded){
            first=i^first;
        a.push_back(first);
        }
        return a;
    }
};