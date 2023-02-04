class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        
        unordered_map<int,int>m;
        for(auto i : banned){
            m[i]++;
        }
        
        int sum = 0,count = 0;
        for(int i = 1; i <=n; i++){
            
            if(m[i] == 0){
                sum += i;
                if(sum <= maxSum)
                    count++;
            }
        }
        
        return count;
    }
};