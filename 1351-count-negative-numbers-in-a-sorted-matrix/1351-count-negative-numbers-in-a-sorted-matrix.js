/**
 * @param {number[][]} grid
 * @return {number}
 */
var binarySearch = function(arr){
    
    let s = 0, e = arr.length - 1;
    
    while(s<=e){
        let m = s + Math.floor((e - s)/2);
        if(arr[m] >= 0){
            s = m + 1;
        }else{
            e = m - 1;
        }
    }
    return s;
}
var countNegatives = function(grid) {
    
    let negNum = 0;
    for(let i = 0 ; i<grid.length; i++){
        
        let index = binarySearch(grid[i]);
        // console.log(index);
        negNum += grid[i].length - index;
    }
    return negNum;
};