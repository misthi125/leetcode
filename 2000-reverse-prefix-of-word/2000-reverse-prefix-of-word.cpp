class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>a;
        int i;
        for(i=0;i<word.size();i++){
            if(!a.empty() && a.top()==ch)break;
            a.push(word[i]);
        }
        if(a.top()!=ch)return word;
        i--;
        int k=i;
        while(!a.empty()){
         word[i-k]=a.top();
         a.pop();
         k--;
        }
        return word;
    }
};