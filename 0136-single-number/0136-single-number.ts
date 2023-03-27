function singleNumber(nums: number[]): number {
    
    const map = new Map();
    for(let i = 0; i<nums.length; i++)
        map.set(nums[i],map.get(nums[i]) ? map.get(nums[i]) + 1 : 1);
    
    let ans = -1;
    for(const [key,value] of map){
        if(value == 1)
            ans = key;
    }
    return ans;
};