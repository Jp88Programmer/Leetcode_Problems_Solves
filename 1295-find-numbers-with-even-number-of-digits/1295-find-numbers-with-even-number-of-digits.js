/**
 * @param {number[]} nums
 * @return {number}
 */

var decimalMove = function(num){
    let count = 0;
    while(num > 0){
        num = Math.floor(num / 10);
        count++;
    }
    return count;
}
var findNumbers = function(nums) {
    
   let ans = 0;
    
    nums.map(num => {
        if(decimalMove(num) % 2 == 0){
            ans++;
        }
    })
    return ans;
    
};