/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let obj = {};
    for(let [i,n] of nums.entries()){
        if(obj[n]){
            return true;
        }else{
            obj[n] = true;
        }
    };
    console.log(obj)
    return false;
};