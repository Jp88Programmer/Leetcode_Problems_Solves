class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        
        queue<int>q;
        q.push(start);
        int n = arr.size();
        vector<bool>visited(n,false);
        while(!q.empty()){
            
            auto index = q.front();
            q.pop();
            
            // if(index < 0 || index >= n) continue;
            
            visited[index] = true;
            
            if(arr[index] == 0) return true;
            
            int pre = index + arr[index];
            int next = index - arr[index];
            if(pre < n && !visited[pre]) q.push(pre);
            if(next >=0 && !visited[next]) q.push(next);
            
            
        }
        
        return false;
    }
};