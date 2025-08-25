function isThree(n: number): boolean {
   if(n < 4) return false;
   let r = Math.floor(Math.sqrt(n));
   if(r * r < n) return false;

   // to check that r is the prime number or not 
   for(let i = 2; i * i <= r; i++){
        if(r % i == 0) return false;
   }
   return true;
};