function countPrimes(n: number): number {
    let arr = new Array(n).fill(1);
    for(let i = 2; i < n; i++){
        if(arr[i] == 1){
            for(let j = 2; i * j < n; j++){
                if(arr[i * j] == 1)
                    arr[i * j] = 0;
            }
        }
    }
    return arr.reduce((count,ele,i) => ele == 1 && i > 1 ? count + 1 : count,0);
};