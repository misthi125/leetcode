class Solution {
public:
string chk(int i){
    if(i%3==0 && i%5==0)return "FizzBuzz";
    else if(i%3==0)return "Fizz";
    else if(i%5==0)return "Buzz";
    return to_string(i);
}
    vector<string> fizzBuzz(int n) {
       vector<string>ans;
       for(int i=1;i<=n;i++){
        ans.push_back(chk(i));
       } 
       return ans;
    }
};