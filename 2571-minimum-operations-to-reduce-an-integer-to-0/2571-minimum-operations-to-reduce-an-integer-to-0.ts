function minOperations(n: number): number {
    
    if(n <= 0) return 0 ;
    if(n == 1) return 1 ; 
    let p = 1;
    while(p*2 < n) p *= 2;
    return Math.min(minOperations(n-p),minOperations(p*2-n)) + 1;
};