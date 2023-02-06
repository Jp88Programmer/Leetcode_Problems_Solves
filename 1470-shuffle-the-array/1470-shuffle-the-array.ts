function shuffle(nums: number[], n: number): number[] {
    let arr:number[] = [];
    
    let i : number= 0;
    let j : number= n;
    console.log(i,j)
    while(i<n && j < 2*n){
        arr.push(nums[i++]);
        arr.push(nums[j++]);
    }
    
    return arr;
};