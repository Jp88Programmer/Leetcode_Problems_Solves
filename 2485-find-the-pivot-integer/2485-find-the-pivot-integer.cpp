class Solution {
public:
    int pivotInteger(int n) {
        
        /*
        int num = 1;
        while(num <= n){
            
            int sum1 = 0;
            int sum2 = 0;
            for(int i = 1; i<=n; i++){

                if(i <= num){
                    sum1 += i; 
                    
                }
                
                if(i >= num){
                    sum2 += i;
                }
                
            }
            
            cout << sum1 << " " << sum2 << endl;
            if(sum1 == sum2) return num;
            
            num++;
        }
        
        return -1;
        */
        
        
        int l = 1, r = n, sum = n * (n + 1) / 2;
    while (l < r) {
        int m = (l + r) / 2;
        if (m * m - sum < 0)
            l = m + 1;
        else
            r = m;
    }
    return l * l - sum == 0 ? l : -1;
    }
};