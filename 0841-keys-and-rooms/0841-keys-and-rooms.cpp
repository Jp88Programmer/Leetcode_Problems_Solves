#define vi vector<int>
#define vvi vector<vector<int>> 
class Solution {
public:
    void dfs(vvi &gr,vi&visited,int id){
        
        visited[id] = 1;
        for(auto adj : gr[id]){
            if(!visited[adj])
                dfs(gr,visited,adj);
        }
    }
    bool canVisitAllRooms(vvi& rooms) {
        
        int n = rooms.size();
        vvi gr(n);
        
        for(int i = 0; i < n ; i++){
            gr[i] = rooms[i];
        }
        
        vi visited(n,0);
        dfs(gr,visited,0);
        
        for(int i = 0; i<n; i++){
            if(!visited[i]) return false;
        }
        
        return true;
        
    }
};