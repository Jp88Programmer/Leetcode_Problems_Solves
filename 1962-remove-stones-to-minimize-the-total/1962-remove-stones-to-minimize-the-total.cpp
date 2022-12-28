class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        priority_queue<int>pq;
        
        for(auto i : piles)
            pq.push(i);
        
        int sum = 0;
        int i =0;
        while(!pq.empty() && i < k){
            auto t = pq.top();
            auto element = t/ 2;
            // cout << element << endl;
            pq.pop();
            pq.push(t - element);
            i++;
            // sum += element;
        }
        
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};