#define vii vector<vector<int>>
#define vi vector<int>
#define vc vector<char>
class Solution {
public:
    bool isCyclic(int n,vii &gr,vi &visited,int id,vc color){
        
        if(visited[id] == 1) return false;
        
        visited[id] = 1;
        // color[id] = 'R';
        bool x = true;
        for(auto adj : gr[0]){
            if(!visited[adj]){
                
                if(color[id] == color[adj]) return false;
                if(color[id] == 'R'){
                    color[adj] = 'B';
                }else
                    color[adj] = 'R';
                
                // if(!isCyclic(n,gr,visited,adj,color))
                //     return false;
                // if(!x) return false;
                isCyclic(n,gr,visited,adj,color) ;
            }
                
        }
        return true;
    }
    
    bool bfs(int n,vii &gr,vi &visited,int id,vc color){
        
        queue<int> q;
        for(int i = 1; i<=n; i++){
            
            if(!visited[i]){
                
            color[i] = 'R';
            q.push(i);
            
            while(!q.empty()){
                
                auto u = q.front();
                q.pop();
                
                if(!visited[u]){
                    visited[u] = 1;
                    for(auto adj:gr[u]){
                        
                        if(color[u] == color[adj]) return false;
                        
                        if(color[u] == 'R') color[adj] = 'B';
                        else color[adj] = 'R';
                        
                        q.push(adj);
                    }
                }
            }
            }
        }
        
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        
        vii gr(n+1);
        vi visited(n+1,0);
        vc color(n+1,'W');
        
        for(auto d : dislikes){
            gr[d[0]].push_back(d[1]);
            gr[d[1]].push_back(d[0]);
        }
        
        // color[1] = 'R';
        return bfs(n,gr,visited,1,color);
        
    }
};