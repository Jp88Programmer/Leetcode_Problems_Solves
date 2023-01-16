/**
 * @param {number[][]} intervals
 * @param {number[]} newInterval
 * @return {number[][]}
 */
var insert = function(intervals, newInterval) {
    
    var result = [];
    
    for(let i = 0; i < intervals.length; i++){
        
        if(intervals[i][1] < newInterval[0]){
            result.push(intervals[i]);
        }else if(intervals[i][0] > newInterval[1] ){
            result.push(newInterval);
            newInterval = intervals[i];
        }else if(intervals[i][1] >= newInterval[0] || newInterval[1] >= intervals[i][0]){
            newInterval[0] = Math.min(intervals[i][0],newInterval[0]);
            newInterval[1] = Math.max(intervals[i][1],newInterval[1]);
        }
        
        console.log(newInterval);
    }
    
    result.push(newInterval);
    return result;
};