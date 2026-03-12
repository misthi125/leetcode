class Solution {
public:
    bool wordPattern(string pattern, string s) {
map<char,string>m;
        vector<string>a;
        int start=0;
        int end;
        while((end=s.find(' ',start))!=string::npos){
            a.push_back(s.substr(start,end-start));
            start=end+1;
        }     
        a.push_back(s.substr(start));
        set<string>se;
        if(a.size()!=pattern.size())return false;
        for(int i=0;i<a.size();i++){
            if(m[pattern[i]]==""){
                m[pattern[i]]=a[i];
                se.insert(a[i]);
                if(se.size()!=m.size())return false;
            }
            else if(m[pattern[i]]!=a[i])return false;
        }
       return true;         
    }
};