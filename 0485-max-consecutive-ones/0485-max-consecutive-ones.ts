function findMaxConsecutiveOnes(nums: number[]): number {
   let count = 0,maxCount = 0;
    nums.map(n => {
        if(n == 1){
            count++;
            maxCount = Math.max(maxCount,count);
        }
        else 
            count = 0;
    })
    return maxCount;
};