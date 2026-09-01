class MyCircularDeque {
    queue<int>a;
    int size;
public:
    MyCircularDeque(int k) {
        size=k;
    }
    
    bool insertFront(int value) {
       if(a.size()>=size)return false;
       queue<int>c;
       c.push(value);
       while(!a.empty()){
        c.push(a.front());
        a.pop();
       }
       a=c;
       return true;
    }
    
    bool insertLast(int value) {
        if(a.size()>=size)return false;
        a.push(value);
        return true;
    }
    
    bool deleteFront() {
        if(a.empty())return false;
        a.pop();
        return true;
    }
    
    bool deleteLast() {
     if(a.empty())return false;
        queue<int>c;
       while(a.size()>1){
        c.push(a.front());
        a.pop();
       }
       a=c;
       return true;
    }
    
    int getFront() {
        int ai=-1;
        if(!a.empty())ai=a.front();
        return ai;
    }
    
    int getRear() {
        int ai=-1;
        if(!a.empty())ai=a.back();
        return ai;
    }
    
    bool isEmpty() {
        return a.empty();
    }
    
    bool isFull() {
       return a.size()==size; 
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */