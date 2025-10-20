/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function(operations) {
    return operations.reduce((x,op) => op.startsWith("++") || op.endsWith("++") ? ++x : --x,0)
};