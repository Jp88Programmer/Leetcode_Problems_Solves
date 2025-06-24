/**
 * @param {number[]} nums
 * @param {number} key
 * @param {number} k
 * @return {number[]}
 */
var findKDistantIndices = function(nums, key, k) {
   
   let keySame = []

   for(let i = 0; i<nums.length; i++){
        if(nums[i] == key){
            keySame.push(i);
        }
   };

   let res = []

   nums.map((num,i) => {
        keySame.map((key,j) => {
            if(Math.abs(i - key) <= k)
                if(!res.includes(i))
                    res.push(i);
        })
   })

   return res;

};