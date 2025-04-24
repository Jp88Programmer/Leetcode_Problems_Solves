/**
 * @param {number[]} nums
 * @return {number}
 */

const comp = function(m1,m2) {
    return Object.keys(m1).sort().join("") === Object.keys(m2).sort().join("");
}
var countCompleteSubarrays = function(nums) {
    
    let m1 = {}, m2 = {};

    nums.map(num => {
        if(m1[num]){
            m1[num]++;
        }else{
            m1[num] = 1;
        }
    });

    let ans = 0;

    for(let i = 0; i < nums.length; i++){
        m2[nums[i]] = i;
        if(comp(m1,m2)){
            let id = Math.min(...Object.values(m2));
            ans += id + 1;
        }
    }

    return ans;
};