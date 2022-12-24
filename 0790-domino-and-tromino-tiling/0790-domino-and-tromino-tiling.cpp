class Solution {
public:
    int numTilings(int n) {
        
        int mod = 1e9+7;
        
        if(n == 1) return 1;
        if(n == 2) return 2;
        
        long arr[n+1];
        arr[0] = 1;
        arr[1] = 1;
        arr[2] = 2;
        
        
        for(int i = 3 ; i<=n ; i++){
            // if(i < 6)
                // arr[i] = arr[i-1] + arr[i-2] + pow(2,i-2); 
            arr[i] = ((long)2*arr[i-1] + arr[i-3])%mod;
            // else
                // arr[i] = arr[i-1] + arr[i-2] + pow(2,i-2) + pow(2,i-4); 
        }
        
        return arr[n];
    }
};