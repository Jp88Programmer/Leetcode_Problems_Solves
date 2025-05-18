/**
 * @param {number[]} nums
 * @return {number}
 */
var smallestIndex = function(nums) {
    
    let index = -1;
    let arr = [...nums];

    for(let i = 0 ; i<nums.length; i++){
        arr[i] = nums[i].toString().split("").reduce((acc,val) => acc + Number(val),0);

        if(arr[i] == i){
            index = i;
            break;
        }
    }

    return index;

    
};