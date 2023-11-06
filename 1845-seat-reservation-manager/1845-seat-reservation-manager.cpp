class SeatManager {
public:
    int num = 0;
    priority_queue<int,vector<int>,greater<int>>pq;
    SeatManager(int n) {
        
    }
    
    int reserve() {
       if(pq.empty()){
           num++;
           return num;
       }else{
           int r = pq.top();
           pq.pop();
           return r;
       }
    }
    
    void unreserve(int seatNumber) {
        if(seatNumber == num)
            --num;
        else{
            pq.push(seatNumber);
        }
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */