function removeOuterParentheses(s: string): string {
    
    let open = 0;
    let res = "";
    for(let str of s){
        if(str == "(" ){
            if(open > 0)
                res += str;
            open++;
        }
        if(str == ")" ){
            if(open > 1)
                res += str;
            open--;
        }
    }

    return res;
};