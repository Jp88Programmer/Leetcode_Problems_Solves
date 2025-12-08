function countTriples(n: number): number {
    
    let count = 0;
    for(let i = 1; i<=n; i++){
        for(let j = 1; j<=n ; j++){
            for(let k = 1; k<=n; k++){
                if(i != j && j != k){
                    if(i * i + j * j == k * k)
                        count++;
                }
            }
        }
    }
    return count;
};