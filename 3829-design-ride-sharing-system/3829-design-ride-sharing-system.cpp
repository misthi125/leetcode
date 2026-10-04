class RideSharingSystem {
    queue<int>r,d;
public:
    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        r.push(riderId);
    }
    
    void addDriver(int driverId) {
        d.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
               vector<int>ans;

        if(d.size()==0 || r.size()==0){
            ans.push_back(-1);
            ans.push_back(-1);
        }
       else{
        ans.push_back(d.front());
        ans.push_back(r.front());
        d.pop();
        r.pop();
       }
        return ans;
    }
    
    void cancelRider(int riderId) {
        queue<int> temp;

    while (!r.empty()) {
        if (r.front() != riderId) {
            temp.push(r.front());
        }
        r.pop();
    }

    r = temp;
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */