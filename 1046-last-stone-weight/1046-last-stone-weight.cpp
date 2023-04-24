class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int>pq;
        for(auto i : stones)
            pq.push(i);
        
        while(!pq.empty()){
            auto m1 = pq.top();
            int m2 = 0;
            pq.pop();
            if(!pq.empty())
                m2 = pq.top();
            else
                return m1;
            pq.pop();
            if(m1 != m2)
                pq.push(m1-m2);
            
        }
        return 0;
    }
};