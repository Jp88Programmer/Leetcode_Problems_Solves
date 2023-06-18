/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var nextPermutation = function(nums) {
    
    let n = nums.length ;
    let index = -1;
    for(let i = n - 2; i >= 0; i--){
        if(nums[i] < nums[i+1]){
            index = i;
            break;
        }
    }
    // console.log(index)
    if(index == -1)
        nums.reverse();
    else{
        let id = index + 1;
        for(let i = n - 1; i>=id; i--){
            if(nums[i]>nums[index]){
                [nums[i],nums[index]] = [nums[index],nums[i]];
                break;
            }
        }
        let arr = nums.slice(index+1,n);
        arr.reverse();
        // console.log(arr)
        for(let i = id,k = 0; i<n && k < arr.length; i++){
            nums[i] = arr[k++];
        }
    }
};