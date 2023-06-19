class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>>vp;
        
        vp.push_back({intervals[0][0],intervals[0][1]});
        
        if(intervals.size() == 1)
            return vp ;
        
        for(int i = 1 ; i < intervals.size()  ; i++){
            
            if(vp[vp.size()-1][1] >= intervals[i][0]){
                
                if(vp[vp.size()-1][1] < intervals[i][1])
                    vp[vp.size()-1][1] = intervals[i][1];
            }else{
                
                vp.push_back({intervals[i][0],intervals[i][1]});
                
            }
        }
        
        return vp ;
    }
};