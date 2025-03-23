/**
 * @param {number[]} nums
 * @return {number}
 */
var distinctPrimeFactors = function(nums) {
    let pn =[2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31];
    let set = new Set();
    nums.map(num => {

        pn.map(p => {
            if(num % p == 0){
                set.add(p);
                while(num % p == 0)
                    num = Math.floor(num / p);
            }
        })

        if(num != 1)
            set.add(num);
    })

    return set.size
};