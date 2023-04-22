/**
 * @param {number[]} nums
 * @return {number}
 */
var binarySearchForNeg = function(arr){
    let s = 0, e = arr.length - 1;
    while(s<=e){
        let m = s + Math.floor((e - s)/2);
        if(arr[m] < 0){
            s = m + 1;
        }else{
            e = m - 1;
        }
    }
    return s;
}
var binarySearchForPos = function(arr){
    let s = 0, e = arr.length - 1;
    while(s<=e){
        let m = s + Math.floor((e - s)/2);
        if(arr[m] > 0){
            e = m - 1;
        }else{
            s = m + 1;
        }
    }
    return e;
}
var maximumCount = function(nums) {
    let s = 0,e = nums.length - 1;
    let neg = 0,pos = 0;
    neg = binarySearchForNeg(nums) ;
    pos = nums.length - binarySearchForPos(nums) - 1;
    return Math.max(neg,pos);
};