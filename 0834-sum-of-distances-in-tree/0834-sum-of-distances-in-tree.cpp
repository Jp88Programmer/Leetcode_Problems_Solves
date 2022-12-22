#define vii vector<vector<int>>
#define vi vector<int>
#define vb vector<bool>
class Solution {
public:
    // vector<unordered_set<int>> tree;
    // vector<int> res, count;
//     int ans = 0;
//     int dfs(vii &gr,vb &visited,int id,int sum){
        
//         if(visited[id]) return 0;
//         visited[id] = true;
//         // sum = 1;
//         // ans += sum ;
//         for(auto adj : gr[id]){
//             if(!visited[adj])
//                  ans += 1 + dfs(gr,visited,id,sum+1);
//         }
        
//         return sum ;
//     }
    
    
    vii gr;
    vi count,res ;
    
    void dfs(int root,int parent = -1){
        
        // if(root == parent) 
        
        for(auto u : gr[root]){
            
            if(u == parent) continue;
            dfs(u,root);
            count[root] += count[u];
            res[root] += res[u] + count[u];
        }
        
        count[root] += 1;
    }
    
    void dfs1(int i,int n,int p=-1){
        
        for(auto u : gr[i]){
            if(u == p) continue;
            res[u] = res[i] - count[u] + n - count[u];
            dfs1(u,n,i);
        }
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        
        
        gr.resize(n);
        count.resize(n);
        res.resize(n);
        
        
//         for(auto e : edges){
//             gr[e[0]].push_back(e[1]);
//             gr[e[1]].push_back(e[0]);
//         }
        
         for(int i = 0; i < n - 1; i++) {
            int a = edges[i][0];
            int b = edges[i][1];
            gr[a].push_back(b);
            gr[b].push_back(a);
        }
        
        dfs(0);
        dfs1(0,n);
        
        return res;
        
        /*
        vii gr(n);
        vb visited(n,false);
        
        for(auto e : edges){
            gr[e[0]].push_back(e[1]);
            gr[e[1]].push_back(e[0]);
        }
        
        vector<int>res;
        for(int i = 0; i<n; i++){
            dfs(gr,visited,i,0);
            res.push_back(ans);
            // ans = 0;
        }
        
        
        return res;
        */
        
        /*
         tree.resize(N);
        res.assign(N, 0);
        count.assign(N, 1);
        for (auto e : edges) {
            tree[e[0]].insert(e[1]);
            tree[e[1]].insert(e[0]);
        }
        dfs(0, -1);
        dfs2(0, -1);
        return res;
        */
    }
};