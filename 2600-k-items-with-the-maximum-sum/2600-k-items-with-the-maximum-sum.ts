function kItemsWithMaximumSum(numOnes: number, numZeros: number, numNegOnes: number, k: number): number {
    if(numOnes >= k)    return k;
    if(numOnes + numZeros >= k) return numOnes;
    return numOnes - (k-numOnes-numZeros); 
};