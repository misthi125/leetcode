class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
  unordered_map<char,int>m;
    for(auto o:magazine){
        m[o]++;
    }
    for(auto o:ransomNote){
        if(m[o]>0)m[o]--;
        else return false;
    }
    return true;
    }
};