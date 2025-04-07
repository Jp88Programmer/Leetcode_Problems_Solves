/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let obj = {};
    let res = Number.MIN_SAFE_INTEGER;
    let maj = Math.floor(nums.length/2);
    nums.map(num => {
        if(obj[num]){
            obj[num]++;
            if(obj[num] > maj){
                res = Math.max(res,num);
            }
        }else{
            obj[num] = 1;
            if(obj[num] > maj){
                res = Math.max(res,num);
            }
        }
    });

    console.log(obj);

    return res;
};