function isThree(n: number): boolean {
    
    let count = 0;
    
    for(let i = 1; i * i <= n; i++){

        if(n % i == 0){
            count++;
            if(Math.floor(n/i) != i){
                count++;
            }
        }
    }

    console.log(count);
    
    return count == 3;
};