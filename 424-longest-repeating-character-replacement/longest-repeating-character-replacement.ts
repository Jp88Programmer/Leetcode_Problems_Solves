function characterReplacement(s: string, k: number): number {
    const map = new Array(26).fill(0);
    let j = 0,res = 0;

    for(let i = 0; i<s.length; i++){
        let st = s.charAt(i);
        map[s.charCodeAt(i) - 65]++;
        let op = (i - j + 1) - Math.max(...map);
        if(op > k){
            let sj = s.charAt(j);
            map[s.charCodeAt(j) - 65]--;
            j++;
        }
        res = Math.max(res,i - j + 1);
    }
    
    return res;
};