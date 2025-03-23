/**
 * @param {number[]} nums
 * @return {number}
 */
const primeFactor = function(num){

    let arr = new Array(num+1).fill(true);
    arr[0] = arr[1] = false;
    for(let i = 2; i * i <= num; i++){
        if(arr[i]){
            for(let j = i * i; j<=num; j+=i){
                arr[j] = false;
            }  
        }
    }

    

    arr.map((a,i) => {
        if(a && num % i != 0){
            arr[i] = false;
        }
        if(arr[i]){
            arr[i] = i;
        }
    });

    // console.log(arr);
    return arr.filter(a => typeof(a) === "number");
}
var distinctPrimeFactors = function(nums) {
    
    let set = new Set();

    nums.map(num => {
        let arr = primeFactor(num);
        arr.map(a => set.add(a));
        // set.add(...arr);
    })

    console.log(set)

    return set.size;

};