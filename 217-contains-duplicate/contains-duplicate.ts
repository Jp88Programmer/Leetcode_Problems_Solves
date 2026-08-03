function containsDuplicate(nums: number[]): boolean {
    const map = new Map<number,boolean>();
    for(let [i,n] of nums.entries()){
        if(map.has(n)){
            return true;
        }else{
            map.set(n,true);
        }
    }
    return false;
    
};