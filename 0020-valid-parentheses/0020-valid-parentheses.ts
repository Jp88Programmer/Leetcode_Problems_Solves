function isValid(s: string): boolean {
    if(s.length == 0 || s.length % 2 != 0) return false;
    let closeParentheses = Object.freeze({
        "(" : ")",
        "{" : "}",
        "[" : "]",
    });
    
    const stack = [];
    for(let i = 0; i<s.length; i++){
        if(s[i] in closeParentheses){
            stack.push(s[i]);
        }else if(s[i] != closeParentheses[stack.pop()]){
            return false;
        }
    }
    return stack.length == 0;
};