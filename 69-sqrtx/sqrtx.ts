function mySqrt(x: number): number {
    let s = 0,e = x,ans = 0;
    
    while(s <= e){
        let m = Math.floor(s + (e - s)/2);
        if(m*m == x) return m;
        else if(m*m < x){
            ans = m;
            s = m + 1;
        }else
            e = m - 1;
    }
    
    return ans;
};