function twoSum(nums: number[], target: number): number[] {
    let map = new Map();
    
    for(let i = 0; i<nums.length; i++){
        let com = target - nums[i];
        if(map.has(com)){
            return [map.get(com),i];
        }
        map.set(nums[i],i);
    }
    return [-1,-1];
};