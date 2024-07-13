/**
 * @param {string[]} logs
 * @return {number}
 */
var minOperations = function(logs) {
    
    let arr = [],pointer = -1;
    logs.map((l,i) => {
        
        if(l != "./" && l != "../" && l.charAt(l.length - 1) == '/'){
            let str = l.substr(0,l.length - 1);
            arr.push(str);
        }else if(l == './' && pointer < arr.length){
            pointer++;
        }else if(l == '../'){
            if(arr.length > 0){
                arr.pop();
                if(pointer == arr.length && pointer > -1)
                    pointer--;
            }
        }
    })
    return arr.length;
};