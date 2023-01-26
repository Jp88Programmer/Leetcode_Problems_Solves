#define vip vector<vector<pair<int,int>>>
#define vii vector<vector<int>>
#define vi vector<int>
#define vp vector<pair<int,int>>
typedef tuple<int,int,int> ti;
class Solution {
public:
    int weight = INT_MAX;
    void dfs(int id,vip& gr,vi& visited,int src,int des,int dist,int k){
        
        if(id == des){
            weight = min(weight,dist);
            return;
        }
        
        visited[id] = 1;
        
        for(auto adj : gr[id]){
            if(adj.first == des){
                dist += adj.second;
                weight = min(weight,dist);
                // return;
            }
                
        }
        for(auto adj : gr[id]){
            
            if(!visited[adj.first]){
                dfs(adj.first,gr,visited,src,des,dist+adj.second,k);
            }
        }
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        
        /*
        vip gr(n);
        
        for(int i = 0; i<n; i++){
            gr[f[i][0]].push_back({f[i][1],f[i][2]});
        }
        
        vi visited(n,0);
        dfs(src,gr,visited,src,dst,0,k);
        
        cout << weight << endl; 
        return weight ;
        */
        
        /*
        vip gr(n);
        for(int i = 0; i<n; i++){
            gr[f[i][0]].push_back({f[i][1],f[i][2]});
        }
        
        priority_queue<ti,vector<ti>,greater<ti>> pq;
        pq.push({0,src,k+1});
        
        while(!pq.empty()){
            
            auto [cost,point,stops] = pq.top();
            pq.pop();
            
            if(point == dst){
                return cost ;
            }
            
            if(!stops)  continue;
            
            for(auto i : gr[point]){
                auto [u,w] = i;
                pq.push({w,u,stops-1});
            }
        }
        return -1;
        */
        
        vector<vector<int>> dp(K + 2, vector<int> (n, INT_MAX));
    for(int i = 0; i <= K + 1; i++) dp[i][src] = 0;
    for(int i = 1; i <= K + 1; i++){
      for(auto& f:flights){
        if(dp[i-1][f[0]] != INT_MAX)
          dp[i][f[1]] = min(dp[i][f[1]], dp[i-1][f[0]] + f[2]);
      }
    }
    return dp[K+1][dst] == INT_MAX? -1: dp[K+1][dst];
    }
};