class MyQueue {
    stack<int>in;
    stack<int>o;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
      in.push(x);
    }
    
    int pop() {
        int val=peek();
        o.pop();
        return val;  
    }
    
    int peek() {
        if(o.empty()){
            while(!in.empty()){
                o.push(in.top());
                in.pop();
            }
        }
        return o.top();
    }
    
    bool empty() {
        return in.empty()&&o.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */