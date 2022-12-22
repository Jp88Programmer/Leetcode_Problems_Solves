#define vii vector<vector<int>>
#define vi vector<int>
#define vb vector<bool>
class Solution {
public:
    
    vii gr;
    vi count,res ;
    
    void dfs(int root,int parent = -1){
        
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

        for(auto e : edges){
            gr[e[0]].push_back(e[1]);
            gr[e[1]].push_back(e[0]);
        }
        dfs(0);
        dfs1(0,n);
        
        return res;
        
    }
};