class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        
        s1.push(x);
    }
    
    int pop() {
        
        int val;
        if(!s2.empty()){
            val = s2.top();
            s2.pop();
        }else{
            
            if(!s1.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
                val = s2.top();
                s2.pop();
            }else{
                val = -1;
            }
        }
        
        return val;
    }
    
    int peek() {
        
        if(!s2.empty()){
            return s2.top();
        }else{
            if(!s1.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
                return s2.top();
                // s2.pop();
            }
        }
        
        return -1;
    }
    
    bool empty() {
        
        if(s1.empty() && s2.empty()) return true;
        return false;
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