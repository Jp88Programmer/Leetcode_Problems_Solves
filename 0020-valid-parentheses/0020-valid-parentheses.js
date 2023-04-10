/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    
    let stack = [];
    
    for(let i = 0; i<s.length; i++){
        
        if(['(','{','['].includes(s.charAt(i))){
            stack.unshift(s.charAt(i));
        }else if([')','}',']'].includes(s.charAt(i))){
            
            if(s.charAt(i) == ')' && stack[0] == '('){
                stack.shift();
            }
            
            else if(s.charAt(i) == '}' && stack[0] == '{'){
                stack.shift();
            }
            
            else if(s.charAt(i) == ']' && stack[0] == '['){
                stack.shift();
            }
            
            else 
                return false;
        }
    }
    
    if(stack.length > 0) return false;
    return true;
};