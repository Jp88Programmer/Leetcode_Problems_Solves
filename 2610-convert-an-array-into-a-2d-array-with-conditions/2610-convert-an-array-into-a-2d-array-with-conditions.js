/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var findMatrix = function(nums) {
    
    let ans = [];
    for(let i = 0; i<nums.length; i++){
        
        if(ans.length == 0){
            const set = new Set([nums[i]]);
            ans.push(set);
        }else{
           let n = ans.length;
           for(let j = 0; j<n; j++){
               let set = ans[j]
               if(!set.has(nums[i])){
                   set.add(nums[i]);
                   break;
               }else if(j == n - 1){
                   ans.push(new Set([nums[i]]));
               }
           }
        }
    }
    return ans.map(set => [...set])
};