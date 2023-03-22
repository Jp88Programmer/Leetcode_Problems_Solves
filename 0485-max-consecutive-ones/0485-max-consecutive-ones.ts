function findMaxConsecutiveOnes(nums: number[]): number {
    let count = 0,ans = 0;
    nums.forEach((e)=>{
        count = e === 1 ? ++count :0;
        ans = Math.max(count,ans);
    })
    return ans;
};