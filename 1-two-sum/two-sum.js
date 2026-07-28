/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let left = 0, right = nums.length-1; 
    let ans = [];
    let map = new Map();
    nums.map((n,i) => {
        if(map.has(n)){
            if(Array.isArray(map.get(n))){
                let arr = map.get(n);
                arr.push(i);
                map.set(n, arr);
            }else{
                let val = map.get(n);
                map.set(n, [val,i]);
            }
        }else{
            map.set(n, i);
        }
    });

    for(let i = 0; i < nums.length; i++){
        let key = target - nums[i]
        if(map.has(key)){
            let val = map.get(key);
            if(Array.isArray(val) && val.filter(v => v != i).length > 0){
                return [i,val.filter(v => v != i)[0]];
            }else if(i !== val){
                return [i,map.get(key)];
            }
        }
    }

    return [];
};