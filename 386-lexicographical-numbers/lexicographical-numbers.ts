function lexicalOrder(n: number): number[] {
    return  new Array(n).fill(0).map((num,i)=> i+1).sort();
};