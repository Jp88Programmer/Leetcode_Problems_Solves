class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        
        map<pair<int,int>, int> mp;
        map<int, pair<int,int>> mp2;
        map<int, int> jump;
        
        int  n = board.size(), maxP = n*n, cnt=0, cur = 1;
        bool f = true;
        
        for(int i=n-1, j=0, k=0; i>=0; --i, ++k){
            while(j>=0 && j<n){
                mp2[cur] = {k,j};
                mp[{k,j}] = cur;
                if(board[i][j] != -1) jump[cur] = board[i][j];
                cur+=1;
                j = f ? j+1 : j-1;
            }
            if(j<0){
                f = true;
                j=0;
            }else{
                f=false;
                j=n-1;
            }
        }
        
        queue<pair<int,int>> q;
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        vis[0][0] = true;
        q.push({0,0});
        
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                int x = q.front().first, y = q.front().second; q.pop();
                int val = mp[{x,y}];
                if(val == maxP) return cnt;
                for(int k=1; k<=6; ++k){
                    int newVal = val+k;
                    if(jump.find(newVal) != jump.end()){
                        newVal = jump[newVal]; //jump to new position (climbing ladder or bitten by snake)
                    }
                    int ni = mp2[newVal].first, nj = mp2[newVal].second;
                    if(vis[ni][nj] == true) continue;
                    q.push({ni, nj});
                    vis[ni][nj] = true;
                }
            }
            cnt++;
        }
        return -1;
    }
};