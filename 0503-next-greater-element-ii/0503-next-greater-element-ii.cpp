class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n = nums.size();
        stack<int>s;
        vector<int>next(n,-1);
        
        for(int i = 0; i< 2 * n; i++){
            
            int num = nums[i%n];
            
            while(!s.empty() && nums[s.top()] < num){
                next[s.top()] = num;
                s.pop();
            }
            
            if(i < n)
                s.push(i);
        }
        
        return next;
    }
};