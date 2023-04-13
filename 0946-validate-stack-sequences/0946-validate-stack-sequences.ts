function validateStackSequences(pushed: number[], popped: number[]): boolean {
    
    let stack:number[] = [];
    let j = 0;
    pushed.forEach(e=>{
        stack.push(e);
        while(stack.length>0 && stack[stack.length-1] === popped[j]){
            stack.pop();
            j++;
        }
    })
    if(stack.length>0 || j != popped.length) return false;
    return true;
};