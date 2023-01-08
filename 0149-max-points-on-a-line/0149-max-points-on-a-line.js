/**
 * @param {number[][]} points
 * @return {number}
 */
var maxPoints = function(p) {
    
    if(p.length <= 2) return p.length;
    let ans  = 2;
    for(let i = 0; i<p.length; i++){
        
        //using map 
        const m = {};
        for(let j = 0; j < p.length; j++){
            
            if(i === j) continue;
            
            //to put the slope 
            let key = Math.atan2(p[j][1] - p[i][1],p[j][0] - p[i][0]);
            
            m[key] = (m[key] || 1) + 1;
            
        }
        
        ans = Math.max(ans,...Object.values(m));
    }
    
    return ans 
};