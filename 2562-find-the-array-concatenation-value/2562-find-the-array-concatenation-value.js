/**
 * @param {number[]} nums
 * @return {number}
 */
var findTheArrayConcVal = function(nums) {
    
    let s = 0,e = nums.length-1;
    let ans = 0;
    
    while(s <= e){
        if(s === e){
            ans += nums[s];
            break;
        } 
        ans += Number(nums[s++].toString() + nums[e--].toString())
    }
    return ans;
};