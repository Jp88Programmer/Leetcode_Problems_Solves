/**
 * @param {number[][]} points
 * @return {number}
 */
var findMinArrowShots = function(points) {
    
    points.sort((a,b) => a[1] - b[1]);
    
    console.log(points);
    let count = 1;
    // let s = points[0][0],e = points[0][1];
    let pos = points[0][1];
    for(let i = 1; i<points.length; i++){
        
        /*
        if(points[i][0] <= e && points[i][1] >= s){
            s = Math.min(s,points[i][0]);
            e = Math.min(e,points[i][1]);
        }else{
            count++;
            s = points[i][0];
            e = points[i][1];
            
        }
        */
        
        if(pos >= points[i][0])
            continue;
        count++;
        pos = points[i][1];
    }
    
    return count;
};