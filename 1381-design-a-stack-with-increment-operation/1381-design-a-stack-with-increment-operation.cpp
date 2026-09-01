class CustomStack {
    vector<int>a;
    int size;
public:
    CustomStack(int maxSize) {
        size=maxSize;
    }
    
    void push(int x) {
        if(a.size() < size)
    a.push_back(x);
    }
    
   
        int pop() {
    if(a.size() == 0)
        return -1;

    int i = a.back();
    a.pop_back();

    return i;
}
    
    
    void increment(int k, int val) {
        int t=a.size()-1-k;
        for(int i = 0; i < k && i < a.size(); i++)
    a[i] += val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */