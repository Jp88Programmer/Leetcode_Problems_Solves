class Solution {
public:
    int len = INT_MAX;
    void fun(int id,vector<int>&ds,vector<int>&pre,int s,int sum){
        
        if(pre.size() == id || s > sum) return ;
        
        if(s == sum){
            // len = min(ds.size(),len);
            if(ds.size() < len){
                len = ds.size();
            }
            return ;
        }
        
        s += pre[id];
        ds.push_back(pre[id]);
        fun(id,ds,pre,s,sum);
        ds.pop_back();
        s -= pre[id];
        fun(id+1,ds,pre,s,sum);
    
    }
    int numSquares(int n) {
       
        /*
        vector<int>ds;
        vector<int>dp;
        
        for(int i = 1; i * i <= n; i++){
            
            dp.push_back(i*i);
        }
        
        fun(0,ds,dp,0,n);
        return len;
        */
        vector<int>cps(n+1,INT_MAX);
        cps[0] = 0;
        
        for(int i = 1; i <= n ; i++){
            
            for(int j = 1; j*j <= i ; j++){
                
                cps[i] = min(cps[i],cps[i - j*j] + 1);
            }
        }
        
        return cps.back();
        
    }
};