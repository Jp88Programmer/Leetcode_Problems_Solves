/**
 * @param {string} path
 * @return {boolean}
 */
var direction = function(dir){
    switch(dir){
        case 'N':
            return [0,1];
        case 'S':
            return [0,-1];
        case 'E':
            return [1,0];
        case 'W':
            return [-1,0];
    }
}
var isPathCrossing = function(path) {
   
    // N = x = 0 y = 1
    // S = x = 0 y = -1
    // E = x = 1 y = 0
    // W = x = -1 y = 0
    
    let m = new Map();
    let x = 0,y = 0;
    m.set('0+0',1);
    for(let p of path){
        let corr = direction(p);
        x += corr[0],y += corr[1];
        console.log(x,y);
        let str = [x,y].join("+");
        if(m.has(str)){
            return true;
        }else{
            m.set(str,1);
        }
    }
    // path.split("").map(p => {
    //     let corr = direction(p);
    //     x += corr[0],y += corr[1];
    //     let str = [x,y].join("");
    //     if(m.has(str)){
    //         return true;
    //     }else{
    //         m.set(str,1);
    //     }
    // })
    return false;
};