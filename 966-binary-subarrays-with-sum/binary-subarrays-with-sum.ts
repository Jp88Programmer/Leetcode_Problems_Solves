function numSubarraysWithSum(nums: number[], goal: number): number {
    
    const map = new Map();

    let sum = 0,count = 0;

    map.set(sum,1);
    
    nums.map((num,i) => {
        sum += num;
        if(map.has(sum - goal)){
            count += map.get(sum - goal);
        }
        map.set(sum,map.has(sum) ? map.get(sum) + 1 : 1);
    })

    return count;
};