class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>&a, vector<int>& b) {
        int i;
        for(i=0;i<a.size();i++){
            if(a[i][0]>b[0])break;
        }
        if(i>=a.size()){
            if(a.size()==0|| ( i>0&&b[0]>a[i-1][1]))a.insert(a.begin()+i,b);
            else a[i-1][1]=max(a[i-1][1],b[1]);
        }
        else{
            if(i>0 &&b[0]<=a[i-1][1]){
             while(i<a.size()&&b[1]>a[i][1]){
                a.erase(a.begin()+i);
             }
             if(i>=a.size()){
              if(a.size()>0)  a[i-1][1]=max(a[i-1][1],b[1]);
              else a.insert(a.begin()+0,b);
             }
             else{
                if(b[1]<a[i][0])a[i-1][1]=max(b[1],a[i-1][1]);
                else {
                    a[i-1][1]=a[i][1];
                    a.erase(a.begin()+i);
                }
             }

            }
            else{
                if(b[1]<a[i][0]){
                    a.insert(a.begin()+i,b);
                }
                else{
                    a[i][0]=b[0];
                    if(a[i][1]>=b[1]);
                    else{
                        i++;
                        if(i<a.size()){
                            while(i<a.size()&&b[1]>a[i][1]){
                a.erase(a.begin()+i);
             }
             if(i>=a.size()){
              if(a.size()>0)  a[i-1][1]=max(a[i-1][1],b[1]);
              else a.insert(a.begin()+0,b);
             }
             else{
                if(b[1]<a[i][0])a[i-1][1]=b[1];
                else {
                    a[i-1][1]=a[i][1];
                    a.erase(a.begin()+i);
                }
                        }
                    }
                    else{
                        a[i-1][1]=b[1];
                    }
                }
            }
        }
        }
        return a;
    }
};