class SmallestInfiniteSet {
public:
    
    priority_queue<int,vector<int>,greater<int>>pq;
    unordered_set<int>s;
    SmallestInfiniteSet() {
        for(int i = 1; i<=1000; i++)
            pq.push(i);
    }
    
    int popSmallest() {
        
        int val = pq.top();
        pq.pop();
        s.insert(val);
        return val;
    }
    
    void addBack(int num) {
        
        auto it = s.find(num);
        if(it != s.end()){
            pq.push(num);
            s.erase(it);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */