function findNumbers(nums: number[]): number {
    
    let count = 0;
    nums.map(num => {
        if(num.toString().length % 2 == 0)
            count++;
    })
    return count;
};