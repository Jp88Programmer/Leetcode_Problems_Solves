function evenNumberBitwiseORs(nums: number[]): number {
    
    let bitOr = 0;

    nums.map(num => {
        if(num % 2 == 0){
            bitOr |= num;
        }
    })
    return bitOr;
};