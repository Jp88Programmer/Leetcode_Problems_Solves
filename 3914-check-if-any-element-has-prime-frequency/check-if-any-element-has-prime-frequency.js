/**
 * @param {number[]} nums
 * @return {boolean}
 */

function isPrime(num){

    if(num <= 1) return false;
    if(num == 2 || num == 3) return true;

    for(let i = 2; i<num; i++){
        if(num % i == 0)
            return false;
    }

    return true;

}
var checkPrimeFrequency = function(nums) {
    
    let obj = {};
    nums.map((num,i) => {
        if(obj[num]){
            obj[num]++;
        }else{
            obj[num] = 1;
        }
    });

    console.log(obj);

    for(let key in obj){
        if(isPrime(obj[key])){
            return true;
        }
    }

    return false;
};