class Solution {
public:
    string removeDigit(string number, char digit) {
        int last=0;
        for(int i=0;i<number.size();i++){
            if(number[i]==digit){
                last=i;
                if(i+1<number.size()&&number[i]<number[i+1]){
                    number.erase(number.begin()+i);
                    return number;
                }
            }
        }
        number.erase(number.begin()+last);
        return number;
    }
};