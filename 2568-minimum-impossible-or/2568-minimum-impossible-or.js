/**
 * @param {number[]} nums
 * @return {number}
 */
var minImpossibleOR = function(nums) {
    
    nums.sort((a,b)=> a - b);
    let ans = 1;
    nums.map((e)=>{
        if(ans === e) ans *= 2;
    })
    
    return ans;
};