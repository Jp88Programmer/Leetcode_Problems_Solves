function maxScore(cp: number[], k: number): number {
    let l = cp.length - k, j = 0;
    let sum = 0,maxsum = 0;
    let ts = cp.reduce((s,n) => s + n,0);
    
    for(let i = 0; i < l ; i++){
        sum += cp[i];
    }
    
    maxsum = Math.max(maxsum,ts - sum);
    
    for(let i = l; i< cp.length; i++){
        sum += cp[i] - cp[j++];
        maxsum = Math.max(maxsum,ts - sum);
    }
    return maxsum;
};