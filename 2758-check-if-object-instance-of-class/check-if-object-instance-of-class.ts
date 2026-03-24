function checkIfInstanceOf(obj: any, classFunction: any): boolean {


    // if(!obj || !classFunction) return false;
    if (obj===null || obj===undefined || typeof classFunction !== 'function') {
        return false;
    }
    let obj1 = Object.getPrototypeOf(obj);
    while(obj1){
        if(obj1 === classFunction.prototype)
            return true;
        obj1 = Object.getPrototypeOf(obj1); 
    }
    return false;
};

/**
 * checkIfInstanceOf(new Date(), Date); // true
 */