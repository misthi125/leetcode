class DataStream {
    int val,cnt,n;
public:
    DataStream(int value, int k) {
        val=value;
        n=k;
        cnt=0;
    }
    
    bool consec(int num) {
        if(num==val)cnt++;
        else  cnt=0;
        if(cnt>=n)return true;
        else return false;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */