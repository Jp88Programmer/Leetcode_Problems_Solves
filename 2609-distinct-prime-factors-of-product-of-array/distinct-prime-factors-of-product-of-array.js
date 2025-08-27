/**
 * @param {number[]} nums
 * @return {number}
 */
function givePrimeNumbers(num){
    let arr = new Array(num+1).fill(1);
    arr[0] = arr[1] = 0;
    for(let i = 2; i * i <= num; i++){
        if(arr[i] == 1){
            for(let j = i * i; j <= num; j += i){
                if(arr[j] == 1)
                    arr[j] = 0;
            }
        }
    }

    return arr.reduce((a,e,i) => {
        if(e == 1){
            a.push(i);
        }
        return a;
    },[])

}

var distinctPrimeFactors = function(nums) {
    let maxNum = Math.max(...nums);

    let primeArr = givePrimeNumbers(maxNum);
    
    let set = new Set();
    primeArr.map((p,i) => {
        nums.map(n => {
            if((p == n || (p <= n/2)) && n % p == 0){
                set.add(p);
            }
        })
    });
    return set.size; 
};