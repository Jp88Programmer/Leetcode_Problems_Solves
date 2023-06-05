/**
 * @param {number[][]} coordinates
 * @return {boolean}
 */
var checkStraightLine = function(c) {
    
    let x1 = c[0][0]
    let y1 = c[0][1]
    let x2 = c[1][0]
    let y2 = c[1][1]
    for(let i = 2; i<c.length; i++){
        x = c[i][0];
        y = c[i][1];
        if((y2-y1)*(x1-x) != (x2-x1)*(y1-y)) return false
    }
    return true;
};