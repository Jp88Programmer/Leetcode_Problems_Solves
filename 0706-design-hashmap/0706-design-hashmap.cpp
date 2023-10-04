class MyHashMap {
public:
    // int v[10000000] = {-1};
    vector<int>v;
    MyHashMap() {
        vector<int>ans(10000000,-1);
        v = ans;
    }
    
    void put(int key, int value) {
        this->v[key] = value;
    }
    
    int get(int key) {
        // if(this->v[key] == 0)
        //     return -1;
        return this->v[key];
    }
    
    void remove(int key) {
        this->v[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */