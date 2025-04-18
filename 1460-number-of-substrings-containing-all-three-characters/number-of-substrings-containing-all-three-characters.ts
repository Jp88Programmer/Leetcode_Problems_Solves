function numberOfSubstrings(s: string): number {
    
    let a = -1,b = -1, c = -1,count = 0;
    for(let i = 0; i<s.length; i++){
        let st = s.charAt(i);
        if(st == 'a') a = i;
        else if(st == 'b') b = i;
        else c = i;

        if(a != -1 && b != -1 && c != -1){
            count += Math.min(a,b,c) + 1;
        }
    }

    return count;
};