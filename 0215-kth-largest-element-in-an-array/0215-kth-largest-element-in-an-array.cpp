class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        
        for(auto i : nums)
            pq.push(i);
        int i = 0,res = 0;
        while(!pq.empty() && i < k){
            res = pq.top();
            pq.pop();
            i++;
        }
        return res;
        
    }
};