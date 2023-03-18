/**
 * @param {number[]} nums
 * @return {number}
 */
var maximizeGreatness = function(nums) {
    
    nums.sort((a,b)=> a-b);
    
    let  j=0, ans = 0;
    
    for(let i = 0; i<nums.length; i++){
        if(nums[i]>nums[j]){
            j++;
            ans++;
        }
    }

    return ans;
};