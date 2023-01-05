class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        
        sort(p.begin(),p.end());
        
        int s = p[0][0],e = p[0][1];
        int count = 1;
        for(int i = 1; i<p.size(); i++){
            
            if(p[i][0] <= e && p[i][1] >= s){
                
                s = min(p[i][0],s);
                e = min(p[i][1],e);
            }else{
                count++;
                s = p[i][0];
                e = p[i][1];
            }
        }
        
        return count;
        
    }
};