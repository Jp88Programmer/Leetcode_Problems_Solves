class MyStack {
public:
    queue<int>q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        if(!q1.empty() && !q2.empty()){
            q1.push(x);
        }else{
            if(q1.empty()){
                q1.push(x);
                while(!q2.empty()){
                    q1.push(q2.front());
                    q2.pop();
                }
            }else{
                q2.push(x);
                while(!q1.empty()){
                    q2.push(q1.front());
                    q1.pop();
                }
            }
        }
    }
    
    int pop() {
        int val ;
        if(!q1.empty()){
             val = q1.front();
            q1.pop();
        }else{
             val = q2.front();
            q2.pop();
        }
        return val;
    }
    
    int top() {
        int val;
         if(!q1.empty()){
             val = q1.front();
           
        }else{
             val = q2.front();
            
        }
        return val;
    }
    
    bool empty() {
         if(q1.empty() && q2.empty())
             return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */