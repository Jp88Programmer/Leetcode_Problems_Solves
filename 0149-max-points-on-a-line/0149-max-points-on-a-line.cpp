class Solution {
public:
    // bool div0 = false;
    float calslope(int x1,int y1,int x2,int y2){
        
        if((x2 - x1) == 0) {
            // div0 = true;
            return INT_MAX;
        }
        double ans =  (double)(y2 - y1)  / (x2 - x1);
        // cout << ans << endl;
        
        return ans ;
    }
    int maxPoints(vector<vector<int>>& p) {
        
        if(p.size() <= 2) return p.size();
        int ans = 2;
        
        for(int i = 0; i<p.size(); i++){
            
            int fr = 1;
            unordered_map<float,int>m;
            for(int j = i+1; j < p.size(); j++){
                
                float s = calslope(p[j][0],p[j][1],p[i][0],p[i][1]);
                
                m[s]++;
                
                fr = max(fr,m[s]);
            }
            
            ans = max(ans,fr+1);
        }
        
        return ans;
    }
};