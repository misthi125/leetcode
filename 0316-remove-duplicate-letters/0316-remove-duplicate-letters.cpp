class Solution {
public:
    string removeDuplicateLetters(string s) {
     vector<int>cnt(26,0);
     vector<int>booli(26,0);
     stack<char>a;
     for(auto it:s)cnt[it-'a']++;
     for(auto it:s){
        if(a.empty()){
            a.push(it);
            cnt[it-'a']--;
            booli[it-'a']=1;
        }
        else{
            if(booli[it-'a']){
                cnt[it-'a']--;
            continue;
            }
            while(!a.empty()&&it<a.top() && cnt[a.top()-'a']>0 && !booli[it-'a']){
                booli[a.top()-'a']=0;
                a.pop();
                }
                cnt[it-'a']--;
                booli[it-'a']=1;
                a.push(it);
        }
     }
     string si="";
     while(!a.empty()){
        si.push_back(a.top());
        a.pop();
     }
     reverse(si.begin(),si.end());
     return si;

    }
};