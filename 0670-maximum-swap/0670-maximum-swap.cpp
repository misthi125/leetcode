class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        string k=s;
        sort(k.begin(),k.end(),greater<char>());
        if(k==s)return num;
        for(int i=0;i<s.size();i++){
            if(k[i]==s[i])continue;
            else{
                int j=s.size()-1;
                while(s[j]!=k[i])j--;
                s[j]=s[i];
                s[i]=k[i];
                break;
            }
        }
        return stoi(s);
    }
};