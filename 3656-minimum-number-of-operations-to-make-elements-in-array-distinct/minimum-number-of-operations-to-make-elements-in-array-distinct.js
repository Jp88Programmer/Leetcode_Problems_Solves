/**
 * @param {number[]} nums
 * @return {number}
 */

const checkArrayDist = function(nums){
    
    const set = new Set();
    
    for(let i = 0; i<nums.length; i++){
        const num = nums[i];
        if(set.has(num)){
            return false;
        }else{
            set.add(num);
        }
    }
    return true;
    
}
var minimumOperations = function(nums) {
    
    let arr = nums;
    let op = 0;
    while(!checkArrayDist(arr)){
        
        if(arr.length > 3){
            arr.splice(0,3);
        }else{
            arr = [];
        }
        op++;
    }
    
    return op;
    
};