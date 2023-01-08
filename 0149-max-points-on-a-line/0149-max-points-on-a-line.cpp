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
        
        // unordered_map<double,pair<int,unordered_map<int,int>>>m;
        
        if(p.size() <= 2) return p.size();
        int ans = 2;
        
        for(int i = 0; i<p.size(); i++){
            
            int fr = 1;
            unordered_map<float,int>m;
            for(int j = i+1; j < p.size(); j++){
                
                float s = calslope(p[j][0],p[j][1],p[i][0],p[i][1]);
                
//                 if(s == INT_MAX){
                    
//                 }else{
                    
//                 }
                
                m[s]++;
                
                fr = max(fr,m[s]);
                
                /*
                // cout << s << endl;
                if(div0){
                    div0 = false;
                    inx++;
                    continue;
                }
                
                // unordered_map<int,int>vis = m[s].second;
                if(m.find(s) == m.end()){
                    
                    m[s].first = 2;
                    m[s].second[p[j][0]] = p[j][1];
                    m[s].second[p[i][0]] = p[i][1];
                }else{
                    pair<int,unordered_map<int,int>>p1 = m[s];
                    // m[s].first\
                    cout << m[s].first << endl;
                // if(vis.find(p[j][0]) != vis.end() && vis[p[j][0]] == p[j][1]){
                
                if(p1.second.find(p[j][0]) != p1.second.end() && p1.second[p[j][0]] != p1.second[p[j][1]]){
                    
                    m[s].first++;
                    // m[s].second[p[j][0]] = p[j][1];
                    // m[s].second[p[j][0]] = p[j][1];
                }
                // else if(p1.second.find(p[j][0]) != p1.second.end() && p1.second[p[j][0]] != p1.second[p[j][1]]){
                //     m[s].first++;
                //     // m[s].second[p[j][0]] = p[j][1];
                // }
                else if(p1.second.find(p[j][0]) == p1.second.end()){
                    // m[s].first = 2;
                    m[s].first++;
                    m[s].second[p[j][0]] = p[j][1];
                    m[s].second[p[i][0]] = p[i][1];
                    // m[s].second[p[j][0]] = p[j][1];
                    // m[s][p[j][0]] = p[j][1];
                    // m[s][p[i][0]] = p[i][1];
                }
                }
                
                */
            }
            
            ans = max(ans,fr+1);
        }
        
        return ans;
    }
};