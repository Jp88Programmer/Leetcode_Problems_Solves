/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
    if(arr.length == 0) return arr;
    if(size >= arr.length) return [arr];
    let slice = size;
    let i = 0;
    let ans = [];
    while(i < arr.length){
      let j = i;
      let res = []
      while(j < slice + i &&  j < arr.length){
        res.push(arr[j]);
        j++;
      }
      i = j;
      ans.push(res);
    }
    return ans;
};
