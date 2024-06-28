/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */

var binarySearch = function(nums,start,end,key){
    while(start<=end){
        let mid = Math.floor((start + end)/2);
        if(nums[mid] > nums[key])
            start = mid+1;
        else
            end = mid - 1;
    }
    return end;
}
var reverseArr = function(nums,start,end){
    while(start<end){
        [nums[start],nums[end]] = [nums[end],nums[start]]
        start++,end--;
    }
}
var nextPermutation = function(nums) {
    
    
    let key = 0,flag = true;
    for(let i = 0; i<nums.length-1; i++){
        if(nums[i] < nums[i+1]){
            key = i;
            flag = false;
        }
    }
    
    if(flag){
        nums.sort((a,b) => a - b);
    }else{
        let index = binarySearch(nums,key+1,nums.length-1,key);
        console.log(index);
        [nums[key],nums[index]] = [nums[index],nums[key]];
        console.log(nums)
        reverseArr(nums,key+1,nums.length-1);
        console.log(nums)
    }
};