class RecentCounter {
    queue<int>a;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        a.push(t);
        while(a.front()<t-3000)a.pop();
        return a.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */