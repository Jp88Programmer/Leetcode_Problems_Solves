class DSU {
    vector<int> parent, rank;
public:
    DSU(int n){
        parent.resize(n);
        rank.resize(n);
        iota(parent.begin(), parent.end(), 0);
    }
    
    int find(int x){
        if(x !=parent[x])
            parent[x] = find(parent[x]);
        return parent[x];
    }
    
    bool Union(int x, int y){
        int xp = find(x);
        int yp = find(y);
        
        if(xp == yp)
            return true;
        else {
            if(rank[xp] > rank[yp])
                parent[yp] = xp;
            else if (rank[xp] < rank[yp])
                parent[xp] = yp;
            else {
                parent[yp] = xp;
                rank[xp]++;
            }
            return false;
        }
    }
    
};

class Solution {
public:
    
    bool dfs(vector<vector<int>>& gr,vector<bool>&visited,int source,int destination){
        
        if(source == destination){
            return true;
        }
        
        visited[source] = true;
        
        for(auto adj : gr[source]){
            if(!visited[adj]){
                bool x = dfs(gr,visited,adj,destination);
                if(x) return true;
            }
                
        }
        
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        //using dfs 
        /*
        if(edges.size() == 0) return true;
        // if(source >= n) return false;
        vector<vector<int>>gr(n);
        vector<bool>visited(n,false);
        
        for(auto ed : edges){
            gr[ed[0]].push_back(ed[1]);
            gr[ed[1]].push_back(ed[0]);
        }
        
        
        return dfs(gr,visited,source,destination);
        */
        
        // using bfs 
        /*
        vector<int>a[n];
        for(auto i:edges){
            a[i[0]].push_back(i[1]);
            a[i[1]].push_back(i[0]);
        }
        queue<int>q;
        q.push(source);
        vector<int>ans(n,INT_MAX);
        ans[source]=0;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            for(auto i:a[front]){
                if(ans[i]>ans[front]){
                    ans[i]=ans[front];
                    q.push(i);
                }
            }
        }
        if(ans[destination]==INT_MAX){
            return false;
        }
        return true;
        */
        
        // using union-find algorithm not code by me 
        DSU uf(n);
        for(int i=0; i<edges.size(); i++) {
            uf.Union(edges[i][0], edges[i][1]);
        }
        return uf.Union(source, destination);
        
    }
};