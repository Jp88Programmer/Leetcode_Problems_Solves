/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
const bin = (arr,l,h,t)=>{
    
    while(l<=h){
        let m = (l + h) >> 1;
        if(arr[m] == t) return true;
        else if(arr[m] < t) l = m + 1;
        else 
            h = m - 1;
    }
    
    return false;
}
var searchMatrix = function(matrix, target) {
    
    let m = matrix.length;
    let n = matrix[0].length;
    let s = 0, e = m * n -1;
    
    while(s <= e){
        let midIndex = Math.floor((s + e) / 2);
        let midVal = matrix[Math.floor(midIndex / n)][midIndex % n];
        if(midVal == target)
            return true;
        else if (midVal < target)
            s = midIndex + 1;
        else
            e = midIndex - 1;
    }
    
    return false;
};