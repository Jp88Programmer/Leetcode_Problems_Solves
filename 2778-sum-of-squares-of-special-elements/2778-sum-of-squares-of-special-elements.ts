function sumOfSquares(nums: number[]): number {
     let ans = 0;
    let n = nums.length;
    nums.map((e,i)=>{
        ans += n % (i+1) == 0 ? e * e : 0
    })
    return ans;
};