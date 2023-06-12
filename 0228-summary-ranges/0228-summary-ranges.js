/**
 * @param {number[]} nums
 * @return {string[]}
 */
var summaryRanges = function(nums) {
  
    if(nums.length == 0) return nums;
    let val = nums[0];
    let ans = [];
    let res = [val];
    for(let i = 1;i<nums.length; i++){
        if(nums[i]-nums[i-1] == 1){
            res.push(nums[i]);
        }else{
            ans.push(res);
            res = [nums[i]];
        }
    }
    ans.push(res);
    let rans = []
    ans.map((a)=>{
        if(a.length > 1){
            rans.push(`${a[0]}->${a[a.length - 1]}`);
        }else{
            rans.push(`${a[0]}`)
        }
    })
    // console.log(ans);
    return rans;
};