class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.size())return s;
        vector<string>k(numRows,"");;
        int i=0;
        while(i<s.size()){
            for(int j=0;j<numRows;j++){
              if(i<s.size())  k[j].push_back(s[i++]);
            else  break;
            }
            for(int j=numRows-2;j>0;j--){
                if(i<s.size())k[j].push_back(s[i++]);
                else break;
            }
         }
        
        string ans;
        for(auto &it:k)ans.append(it);
        return ans;
    }
};