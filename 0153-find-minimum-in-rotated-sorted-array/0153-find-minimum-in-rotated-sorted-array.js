/**
 * @param {number[]} nums
 * @return {number}
 */
var findMin = function(nums) {
    let s = 0,e = nums.length - 1;
    
    while(s < e){
        
        if(nums[s] < nums[e]) return nums[s];
        
        let mid = s + Math.floor((e - s)/2);
        
        if(nums[mid] >= nums[s]){
            s = mid + 1;
        }else{
            e = mid;
        }
    }
    return nums[s];
};