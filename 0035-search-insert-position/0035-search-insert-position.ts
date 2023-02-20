function searchInsert(nums: number[], target: number): number {
    let s:number = 0,e:number = nums.length-1;
    while(s <= e){
        let m = Math.floor(s + (e - s)/2);
        if(nums[m] === target) return m;
        else if(nums[m] < target) s = m + 1;
        else 
            e = m - 1;
        }
    
    return s;
};