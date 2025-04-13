class Solution {
public:
    
    long long pow(long long a,long long b,int mod){
        
        long long res = 1 ; 
        while(b > 0){
            if((b & 1) != 0 ){
                res = (res * (a % mod )) % mod ;
            }
            
            a = ( a % mod ) * (a % mod ) % mod ;
            
            b = b>>1 ;
        }
        
        return res ;
    }
    long countGoodNumbers(long long n) {
        
        long long  oddInc,evenInc;
        if(n % 2 == 0){
            
            evenInc = n / 2;
            oddInc = n - evenInc;  
        }else{
            evenInc = n/2 + 1; 
            oddInc = n - evenInc;
        }
        
        int noPrime = 4;
        int noEven = 5;
        int mod = 7 + 1000000000;
        long count = 1 ;
        
        count = (( pow(noEven,evenInc,mod) % mod) *( pow(noPrime,oddInc,mod) % mod ) )% mod ;
//         for(int i = 0 ; i < evenInc ; i++){
            
//             count = (count % mod * ( noEven % mod) ) % mod ;
//         }
        
//          for(int i = 0 ; i < oddInc ; i++){
            
//              count = (count % mod * ( noPrime % mod) ) % mod ;
//         }
        
        return count ;
        
    }
};