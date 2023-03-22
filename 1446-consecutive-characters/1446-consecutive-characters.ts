function maxPower(s: string): number {
    let count:number=1,ans:number=0;
    for(let i = 0; i<s.length; i++){
        count = s.charAt(i) === s.charAt(i+1) ? ++count : 1;
        ans = Math.max(count,ans);
    }
    return ans;
};