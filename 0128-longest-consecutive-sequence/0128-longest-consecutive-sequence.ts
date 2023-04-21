function longestConsecutive(nums: number[]): number {
    
    let set = new Set(nums);
    let ans = 0;
    for(let i =0; i<nums.length; i++){
        if(!set.has(nums[i]-1)){
            let curr = 1;
            while(set.has(nums[i]+curr))
                curr++;
            ans = Math.max(ans,curr);
        }
    }
    return ans;
};