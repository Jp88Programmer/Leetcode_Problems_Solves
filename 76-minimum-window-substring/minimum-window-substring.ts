function minWindow(s: string, t: string): string {
        
    const map = new Map();
    let si = -1,mlen = Number.MAX_SAFE_INTEGER,j = 0,count= 0;

    for(let temp of t){
        map.set(temp,map.has(temp) ? map.get(temp) + 1 : 1);
    }

    for(let i = 0; i<s.length; i++){
        let st = s.charAt(i);
        if(map.get(st) > 0) count++;
        map.set(st,map.has(st) ? map.get(st) - 1: -1);

        while(count == t.length){
            let sj = s.charAt(j);
            if((i-j+1) < mlen){
                mlen = (i-j+1);
                si = j;
            }
            map.set(sj,map.get(sj) + 1);
            j++;
            if(map.get(sj) > 0) count--;
        }
    }
    return si == -1 ? "" : s.substr(si,mlen);
};