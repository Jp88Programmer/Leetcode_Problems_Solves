class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int>s;
        int j = 0;
        for(int i = 0; i<pushed.size(); i++){
            s.push(pushed[i]);
            while(!s.empty() && s.top() == popped[j] && j < popped.size()){
                s.pop();
                j++;
            }
        }
        
        if(!s.empty() || j != popped.size())
            return false;
        return true;
    }
};