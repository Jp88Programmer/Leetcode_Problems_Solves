/**
 * @param {number[]} nums
 * @return {number}
 */
var binarySearch = function(arr,isPos = false){
    let s = 0, e = arr.length - 1;
    while(s<=e){
        let m = s + Math.floor((e - s)/2);
        if(arr[m] < 0){
            s = m + 1;
        }else if(arr[m] > 0){
            e = m - 1;
        }else{
            if(isPos){
                s = m + 1;
            }else
                e = m - 1;
        }
    }
    
    if(isPos)
        return e;
    return s;
}
var maximumCount = function(nums) {
    let s = 0,e = nums.length - 1;
    let neg = 0,pos = 0;
    neg = binarySearch(nums) ;
    pos = nums.length - binarySearch(nums,true) - 1;
    return Math.max(neg,pos);
};