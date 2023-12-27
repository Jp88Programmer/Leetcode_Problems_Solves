class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        
        int sum = 0;
        for(int i = 0; i<colors.size(); i++){
            if(colors[i] == colors[i+1]){
                int m = min(neededTime[i],neededTime[i+1]);
                int ma = max(neededTime[i],neededTime[i+1]);
                sum += m;
                neededTime[i+1] = ma;
            }
        }
        
        return sum ;
    }
};