function myPow(x: number, n: number): number {
    if(n == 1) return x;
    if(n == 0) return 1;
    if(n<0){
        x = 1/x;
        n = Math.abs(n);
    }
    if(n % 2 == 0) return myPow(x*x,n/2);
    else return x * myPow(x*x,(n-1)/2);
};