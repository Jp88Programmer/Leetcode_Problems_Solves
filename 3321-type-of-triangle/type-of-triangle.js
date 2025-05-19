/**
 * @param {number[]} nums
 * @return {string}
 */

function isTriangel(nums){
    if((nums[0] + nums[1] > nums[2]) && (nums[1] + nums[2] > nums[0]) && (nums[0] + nums[2] > nums[1]))
        return true;
    return false;
}
var triangleType = function(nums) {
    
    let res = "none"
    if(isTriangel(nums)){
        res = "scalene";
    }else{
        return res;
    }

    if(nums[0] == nums[1] || nums[1] == nums[2] || nums[2] == nums[0]){
        res = "isosceles"
    }

    if(nums[0] == nums[1] && nums[1] == nums[2])
        res = "equilateral"

    return res;
};