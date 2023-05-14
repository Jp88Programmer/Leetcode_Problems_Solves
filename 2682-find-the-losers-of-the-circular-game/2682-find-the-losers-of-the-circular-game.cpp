class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        
        unordered_map<int,int>m;
        
        int move = 1,i = 1;
        
        while(m[move] == 0){
            m[move] = 1;
            
            if((move + i * k) % n == 0)
                move = n;
            else
                move =  (move + i * k) % n;
            
            i++;
        }
        
         vector<int>ans ;
        for(int i = 1; i<=n; i++){
            if(m.find(i) == m.end())
                ans.push_back(i);
        }
        
        return ans;
    }
};