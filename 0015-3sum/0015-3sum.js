/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    let ans = []
    nums.sort((a,b) => a - b);
    for(let i = 0; i<nums.length; i++){
        let start = i+1,end = nums.length-1;
        let sum = 0 - nums[i];
         if(i==0 || nums[i] != nums[i-1]){
            while(start<end){
                if(nums[start] + nums[end] < sum){
                    start++;
                }else if(nums[start] + nums[end] > sum){
                    end--;
                }else{
                    let res = [nums[i],nums[start],nums[end]]
                    ans.push(res);

                    while(start < end && nums[start] == nums[start+1])
                        start++;

                    while(start < end && nums[end] == nums[end-1])
                        end--;

                    start++;
                    end--;
                }
            }
         }
    }
    
    return ans;
};