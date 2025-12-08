function countTriples(n: number): number {
    
    const arr = new Array(n*n + 1).fill(0);

    for(let i = 1; i<=n; i++){
        arr[i*i] = 1;
    }

    let count = 0;

    for(let i = 1; i<=n; i++){
        for(let j = i; i * i + j * j <= n * n; j++){
            count += arr[i * i + j * j] * 2;
        }
    }
    return count;
    
};