class Solution {
public:
    int nonSpecialCount(int l, int r) {
        
        int n = sqrt(r);
        
        vector<int>v(n+1,1);
        v[1] = 0;
        
        for(int i = 2; i<=n; i++){
            if(v[i] == 1){
                for(int j = i*i; j<=n; j+=i)
                    v[j] = 0;
            }
        }
        
        int count = 0;
        
        for(int i = 2; i<=n; i++){
            if(v[i] == 1){
                int n = i * i;
                if(n >= l and n<=r)
                    count++;
            }
        }
        
        return (r - l + 1) - count;
    }
};