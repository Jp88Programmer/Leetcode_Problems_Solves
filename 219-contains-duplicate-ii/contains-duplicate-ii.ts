function containsNearbyDuplicate(nums: number[], k: number): boolean {
    const map = new Map(); 
    for(let [i, num] of nums.entries()){
        if(map.has(num) && Math.abs(i - map.get(num)) <= k){
            return true;
        }else{
            map.set(num,i);
        }
    }
    return false;
};