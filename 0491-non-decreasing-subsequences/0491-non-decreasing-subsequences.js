/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var s = new Set();
var fun = function(id,nums,ds){
    
    if(id == nums.length){
        if(ds.length > 1){
            s.add(ds);
        }
        return ;
    }
    
    if(ds.length == 0 || (ds.length > 0 && nums[id] >= ds[ds.length-1])){
        ds.push(nums[id]);
        fun(id+1,nums,ds);
        ds.pop();
    }
    fun(id+1,nums,ds);
    
}

var findSubsequences = function(nums) {
    
    /*
    let arr = [];
    // let s = new Set();
    let ds = [];
    
    fun(0,nums,ds);
    s.forEach((a)=>{
        arr.push(a);
    })
    console.log(s,ds);
    return arr;
    */
    if(nums.length < 2) return [];
    var result = [];
    var path = [];
    var backtrack = function(startIndex) {
        if(path.length >= 2) {
            result.push([...path]);
        }
        var used = new Set(); // Important, we need to check whether the num has been used on this level to avoid duplicate
        for(var i = startIndex; i < nums.length; i++) {
            if(path.length > 0 && nums[i] < path[path.length - 1] || used.has(nums[i])) continue;
            used.add(nums[i]);
            path.push(nums[i]);
            backtrack(i + 1);
            path.pop();
        }
        return;
    }
    backtrack(0);
    return result;
};