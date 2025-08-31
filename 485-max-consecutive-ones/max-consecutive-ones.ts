function findMaxConsecutiveOnes(nums: number[]): number {
    
    let maxOne = 0, one = 0;
    for(let i = 0; i<nums.length; i++){
        if(nums[i] == 1){
            one++;
        }else{
            one = 0;
        }
        maxOne = Math.max(maxOne,one);
    }
    return maxOne;
};