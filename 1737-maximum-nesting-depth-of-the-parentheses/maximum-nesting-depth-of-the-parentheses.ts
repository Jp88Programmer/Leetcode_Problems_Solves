function maxDepth(s: string): number {
    let ans = 0,count = 0;
    for(let i = 0 ; i<s.length; i++){
        if(s.charAt(i) == "("){
            ans = Math.max(++count,ans);
            
        }else if(s.charAt(i) == ")"){
            count--;
        }
    }
    return ans;
};