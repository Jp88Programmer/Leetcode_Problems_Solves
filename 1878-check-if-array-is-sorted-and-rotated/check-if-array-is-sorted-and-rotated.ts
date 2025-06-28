function check(nums: number[]): boolean {
    let count = 0;

    nums.map((num:number,i:number) => {
        if(num > nums[(i+1) % nums.length])
            count++;
    })

    return count <= 1;
};