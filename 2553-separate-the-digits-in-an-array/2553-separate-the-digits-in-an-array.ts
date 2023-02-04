function separateDigits(nums: number[]): number[] {
    
    let arr : number[] = [];
    
    for(let i = 0; i<nums.length; i++){
        
        let str : string = nums[i] + ""
        
        for(const s of str)
            arr.push(parseInt(s));
    }
    
    return arr;
};