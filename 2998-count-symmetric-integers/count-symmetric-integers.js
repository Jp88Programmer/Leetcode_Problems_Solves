/**
 * @param {number} low
 * @param {number} high
 * @return {number}
 */
var countSymmetricIntegers = function(low, high) {
    
    let count = 0;
    for(let i = low; i<=high; i++){
        if(i.toString().length % 2 == 0){
            let str = i.toString();
            let sum = 0,sum1 = 0;
            for(let j = 0; j < str.length/2; j++){
                sum += parseInt(str.charAt(j));
                sum1 += parseInt(str.charAt(str.length - 1 - j));
            }
            if(sum == sum1)
                count++;
        }
    }

    return count;
};