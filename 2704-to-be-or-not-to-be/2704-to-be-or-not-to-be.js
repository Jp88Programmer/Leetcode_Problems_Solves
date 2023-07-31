/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    return {
        toBe : function(val1){
          
                if(val !== val1){
                    throw new Error("Not Equal");
                }
                return true;
        
            
            // return val === val1 ? true :  new Error("Not Equal");
        },
        notToBe : function(val1){
            // return val !== val1 ? true :  new Error("Equal");
            
                if(val === val1){
                    throw new Error("Equal");
                }
                return true;
            
        },
    }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */