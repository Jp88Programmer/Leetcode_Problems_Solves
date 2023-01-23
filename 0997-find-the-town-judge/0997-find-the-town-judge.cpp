class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>>g(n+1);
        
        if(trust.size() == 0 && n > 1) return -1;
        for(auto i : trust){
            g[i[0]].push_back(i[1]);
        }
        
        int f = -1;
        for(int i = 1; i<g.size(); i++){
            // cout << i <<endl;
            cout << g[i].size() << endl;
            if(g[i].size() == 0) {
                f = i;
                // break;
            }
        }
            
        // return f;
        if(f == -1) return f;
        
        
        for(auto i : g){
            bool flag = false;
            for(auto j : i){
                if(j == f) {
                    flag = true;
                    break;
                }
            } 
            
            if(i.size()>0 && flag == false) return -1;
            // cout << j << " ";
            cout << endl;
        }
        
        return f;
        
    }
};