class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        
        priority_queue<int>pq;
        
        for(auto i :nums){
            pq.push(i);
        }
        
        int i = 0;
        int sum = 0;
        while(i < k){
            int num = pq.top();
            pq.pop();
            sum += num;
            pq.push(num + 1);
            i++;
        }
        
        return sum ;
    }
};