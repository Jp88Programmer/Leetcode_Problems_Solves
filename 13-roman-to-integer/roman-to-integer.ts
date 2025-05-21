function romanToInt(s: string): number {
    const rn = {
        I  : 1,
        V  : 5,
        X  : 10,
        L  : 50,
        C  : 100,
        D  : 500,
        M  : 1000,
    }

    let res = 0;
    for(let i = 0; i<s.length; i++){
        if((i+1) < s.length && rn[s.charAt(i)] < rn[s.charAt(i+1)]){
            res += rn[s.charAt(i+1)] - rn[s.charAt(i)];
            i++;
        }else{
            res += rn[s.charAt(i)];
        }
    }
    return res;
};