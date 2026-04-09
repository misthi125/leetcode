class Solution {
public:
    string simplifyPath(string path) {
        vector<string> k;
        int i = 0;

        while (i < path.size()) {
            while (i < path.size() && path[i] == '/') i++; 

            int start = i;

            while (i < path.size() && path[i] != '/') i++;

            string p = path.substr(start, i - start);

            if (p == "" || p == ".") continue;
            else if (p == "..") {
                if (!k.empty()) k.pop_back();
            }
            else {
                k.push_back(p);
            }
        }

        string ans = "";
        for (auto &it : k) {
            ans += "/" + it;
        }

        return ans.empty() ? "/" : ans;
    }
};