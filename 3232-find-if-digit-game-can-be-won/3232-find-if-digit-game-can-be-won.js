/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canAliceWin = function(nums) {
    
    let sumDigitOne = 0,sumDigitTwo = 0;
    
    nums.map(num => {
        if(Math.floor(num / 10) == 0){
            sumDigitOne += num;
        }else if(Math.floor(num / 100) == 0){
            sumDigitTwo += num;
        }
    })
    
    return sumDigitOne != sumDigitTwo;
};