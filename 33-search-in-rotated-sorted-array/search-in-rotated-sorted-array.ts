function search(nums: number[], target: number): number {
    
    let n = nums.length,s = 0,e = n - 1;
    
    while(s <= e){
        let m = Math.floor(s + (e -s)/2);
        if(nums[m] == target) return m;
        
        if(nums[s] <= nums[m]){
            if(nums[s]<= target && target <= nums[m]) e = m - 1;
            else
                s = m + 1;
        }else{
            if(nums[m] <= target && target <= nums[e]) s = m + 1;
            else e = m - 1;
        }
    }
    
    return -1;
};