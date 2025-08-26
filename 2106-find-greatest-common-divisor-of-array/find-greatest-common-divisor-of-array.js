/**
 * @param {number[]} nums
 * @return {number}
 */
var findGCD = function(nums) {
    let [a,b] = [Math.min(...nums), Math.max(...nums)];

    while(a > 0 && b > 0){

        if(a > b)
            a = a % b;
        else
            b = b % a;
    }

    return a == 0 ? b : a;
};