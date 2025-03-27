/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    
    let res = 0;
    let count = 0;

    nums.map(num => {
        if(num == 0){
            res = Math.max(res,count);
            count=0;
        }else{
            count++;
        }
    })

    res = Math.max(res,count);

    return res;
};