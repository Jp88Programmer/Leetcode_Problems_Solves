/**
 * @param {number[]} pushed
 * @param {number[]} popped
 * @return {boolean}
 */
var validateStackSequences = function(pushed, popped) {
    
    let stack = [];
    let j = 0;
    pushed.forEach(e=>{
        stack.push(e);
        while(stack.length>0 && stack.slice(-1) == popped[j]){
            stack.pop();
            j++;
        }
    })
    if(stack.length>0 || j != popped.length) return false;
    return true;
};