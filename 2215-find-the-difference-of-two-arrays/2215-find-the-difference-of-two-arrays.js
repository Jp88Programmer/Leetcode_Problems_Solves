/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[][]}
 */
var findDifference = function(nums1, nums2) {
    
    let map = new Map();
    let ans = []
    let res = []
    nums2.forEach((e)=>{
        map.set(e,map.get(e) ? map.get(e)+1 : 1);
    })
    
    nums1.forEach((e)=>{
        if(!map.has(e)){
            ans.push(e);
            map.set(e,map.get(e) ? map.get(e)+1 : 1);
        }
    })
    res.push(ans);
    
    map = new Map();
    ans = []
     nums1.forEach((e)=>{
        map.set(e,map.get(e) ? map.get(e)+1 : 1);
    })
    
    nums2.forEach((e)=>{
        if(!map.has(e)){
            ans.push(e);
            map.set(e,map.get(e) ? map.get(e)+1 : 1);
        }
    })
    res.push(ans);
    return res;
};