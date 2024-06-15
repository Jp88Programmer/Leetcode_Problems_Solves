function findMaxConsecutiveOnes(nums: number[]): number {
   
    let count = 0,one = 0;
    nums.map(num => {
        if(num == 0){
           one = 0;
        }else{
            one++;
        }
        count = Math.max(count,one);
    })
    return count;
};