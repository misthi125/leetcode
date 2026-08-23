class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>s;
        for(auto i:students)s.push(i);
        for(auto i:sandwiches){
            int n=s.size();
            while(!s.empty()&&s.front()!=i && n){
                n--;
                s.push(s.front());
                s.pop();
            }
            if(!n)break;
            s.pop();
        }
        return s.size();
    }
};