/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var wiggleSort = function(nums) {
    
    nums.sort((a,b)=> a-b);
    let s = 0; e = Math.floor(nums.length/2);
    let res = [...nums];
    let i = 0;
    let n = nums.length;
    console.log(res);
    let m = (n+1)>>1;
    for(let i = m -1,j = 0; i>=0; i--,j+=2){
        nums[j] = res[i];
    }
    for(let i = n-1,j = 1; i>=m; i--,j+=2){
        nums[j] = res[i];
    }
    // while(i<nums.length && e < nums.length){
    //     res[i++] = nums[s++];
    //     res[i++] = nums[e++];
    // }
    // // nums = Array.of(res);
    // // res.map((e)=> nums)
    // for(let i = 0; i<nums.length; i++){
    //     nums[i] = res[i];
    // }
};