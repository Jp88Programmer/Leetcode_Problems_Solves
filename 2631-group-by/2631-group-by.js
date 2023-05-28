/**
 * @param {Function} fn
 * @return {Array}
 */
Array.prototype.groupBy = function(fn) {
    
    let obj = {};
    // console.log(this.leng)
    for(let i = 0; i<this.length; i++){
        let id = fn(this[i]);
        if(!obj.hasOwnProperty(id)){
            obj[id] = [];
        }
        obj[id].push(this[i]);
    }
    return obj;
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */