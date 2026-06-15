class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if (s.size() < 10) return {};

        unordered_map<int,int> mp;
        vector<string> ans;

        unordered_map<char,int> val = {
            {'A',0},
            {'C',1},
            {'G',2},
            {'T',3}
        };

        int x = 0;

        for(int i=0;i<10;i++) {
            x = (x << 2) | val[s[i]];
        }

        mp[x] = 1;

        int mask = (1 << 20) - 1;

        for(int i=10;i<s.size();i++) {
            x = ((x << 2) | val[s[i]]) & mask;

            if(mp[x] == 1) {
                ans.push_back(s.substr(i-9,10));
            }

            mp[x]++;
        }

        return ans;
    }
};