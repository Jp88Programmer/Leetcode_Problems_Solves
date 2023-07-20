class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>s;
        for(int i = 0; i<a.size(); i++){
            if(s.empty() || a[i]>0 ){
                s.push(a[i]);
            }else{
                while(!s.empty() && s.top() > 0 && s.top() < abs(a[i])){
                    s.pop(); 
                }
                if(!s.empty() && s.top() == abs(a[i]))
                    s.pop();
                else if(s.empty() || s.top() < 0){
                    s.push(a[i]);
                }
            }
        }
        
        vector<int>res;
        while(!s.empty()){
            cout << s.top() << endl;
            res.push_back(s.top());
            s.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};