function minImpossibleOR(nums: number[]): number {
     nums.sort((a,b)=> a - b);
    let ans:number = 1;
    nums.map((e)=>{
        if(ans === e) ans *= 2;
    })
    
    return ans;
};