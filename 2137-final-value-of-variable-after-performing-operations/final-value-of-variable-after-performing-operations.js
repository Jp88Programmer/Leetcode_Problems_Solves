/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function(operations) {
    
    let x = 0;
    operations.map(op => {
        if(op.startsWith("++") || op.endsWith("++")){
            x++;
        }else if(op.startsWith("--") || op.endsWith("--")){
            x--;
        }
    })
    return x;
};