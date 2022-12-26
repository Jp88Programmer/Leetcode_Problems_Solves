/**
 * @param {number[][]} intervals
 * @return {number}
 */
var eraseOverlapIntervals = function(intervals) {
    
    //sort the arry and count the overlap element 
    intervals.sort((a,b)=> a[1] - b[1]);
    // console.log(intervals);
    let pre = 0,count = 0;
    for(let i = 1; i < intervals.length; i++){
        
        if(intervals[i][0] < intervals[pre][1])
            count++;
        else
            pre = i;
    }
    
    return count;
};