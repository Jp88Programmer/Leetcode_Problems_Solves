function numSubarraysWithSum(nums: number[], goal: number): number {
    
    let sum = 0,count = 0;
    const map = new Map();
    map.set(sum,1);

    nums.map(num => {
        sum += num;
        if(map.has(sum - goal))
            count += map.get(sum - goal);
        map.set(sum,map.has(sum) ? map.get(sum) + 1 : 1);
    })

    return count;
};