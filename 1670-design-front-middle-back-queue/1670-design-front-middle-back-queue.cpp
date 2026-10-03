class FrontMiddleBackQueue {
    int n;
    vector<int>a;
public:
    FrontMiddleBackQueue() {
        n=0;
    }
    
    void pushFront(int val) {
        a.insert(a.begin()+0,val);
        n++;
    }
    
    void pushMiddle(int val) {
        a.insert(a.begin()+(n/2),val);
        n++;
    }
    
    void pushBack(int val) {
        a.insert(a.begin()+n,val);
        n++;
    }
    
    int popFront() {
        int k=-1;
    if(a.size()!=0){
        k=a[0];
        a.erase(a.begin());
        n--;
    }
    return k;
    }
    
    int popMiddle() {
        int k=-1;
    if(a.size()!=0){
        k=a[(n-1)/2];
        a.erase(a.begin()+(n-1)/2);
        n--;
    }
    return k;
    }
    
    int popBack() {
        int k=-1;
    if(a.size()!=0){
        k=a[n-1];
        a.erase(a.begin()+n-1);
        n--;
    }
    return k;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */