/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var minCapability = function(nums, k) {
    
    let left = 1,right = 1e9;
    let n = nums.length;
    while(left < right){
        let mid = Math.floor(left + (right - left)/2);
        let take = 0;
        for(let i = 0; i<n; i++){
            if(nums[i] <= mid){
                take++;
                i++;
            }
        }
        
        if(take >= k){
            right = mid ;
        }else
            left = mid + 1;
    }
    
    return left;
};